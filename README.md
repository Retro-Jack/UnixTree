# UnixTree

A curses-based file tree navigator and manager for Unix/Linux, modelled on the classic ZTree/ZTGOLD file managers from DOS. Three-panel interface — directory tree (upper left), disk and node statistics (upper right), and file list (lower) — controlled entirely from the keyboard.

This is a fork of [dokakod/unixtree](https://github.com/dokakod/unixtree), which preserves the original source by **Rob Juergens**.

---

## Quick Start

```sh
xt       # terminal file manager
xtx      # X11 variant
```

See [Installation](#installation) and [Terminal Requirements](#terminal-requirements).

---

## Installation

Pre-built packages are available on the [Releases](https://github.com/Retro-Jack/UnixTree/releases) page.

| Distro | Command |
|--------|---------|
| Arch / Manjaro | `sudo pacman -U unixtree-3.0.2-*.pkg.tar.zst` |
| Debian / Ubuntu / Mint | `sudo dpkg -i unixtree_3.0.2-1_amd64.deb` |
| Fedora / RHEL | `sudo dnf install ./unixtree-3.0.2-1.x86_64.rpm` |
| Generic Linux | `tar xzf unixtree-3.0.2-linux-x86_64.tar.gz && sudo ./install.sh` |

---

## Terminal Requirements

UnixTree uses its own `.trm` terminal definition files rather than system terminfo/termcap. At startup it looks up `$XTPATH/trm/$TERM.trm`.

**Supported `$TERM` values:** `xterm`, `xterm-256color`, `linux`, `vt100`, `vt220`, `ansi`

If your terminal reports a different value, set it explicitly:

```sh
TERM=xterm-256color xt
```

**Minimum terminal size:** 80 columns × 24 rows.

---

## Building from Source

### Prerequisites

| Package | Purpose |
|---------|---------|
| `gcc` | C compiler (must be ANSI/C99-compliant) |
| `make` | Build system |
| `libx11-dev` / `libx11-devel` | X11 headers (for `xtx`) |

### Important: No Spaces in Path

The build system passes paths directly into GNU Make, which splits on spaces. If your source directory path contains spaces, create a symlink first:

```sh
ln -s "/path/with spaces/xt-3.0.2" /tmp/unixtree
cd /tmp/unixtree
```

### Build

```sh
. build [options] <platform>   # configure for your platform
make all                        # build everything
```

If `<platform>` is omitted, the build script will attempt to detect it automatically.

**Common platforms:**

| Platform | O/S | Architecture |
|----------|-----|-------------|
| `linux` | Linux | x86 |
| `freebsd` | FreeBSD | x86 |
| `netbsd` | NetBSD | x86 |
| `osx` | Mac OS/X | powerpc |
| `solaris` | Solaris | sparc |
| `solaris64` | Solaris 64-bit | sparc |
| `aix` | IBM AIX | rs6000/ppc |
| `hp` | HP/UX | pa/risc |
| `winx86` | Windows (MKS ToolKit) | x86 |
| `cygwin-gcc` | Windows (cygwin + gcc) | x86 |

Platform env files are in `env/<platform>.env`. To add a new platform, copy the closest existing one and adjust as needed, then add an entry to `bin/guess.sh`.

### Build Targets

| Target | Description |
|--------|-------------|
| `all` | Build everything |
| `install` | Build and install to `$INS_DIR` |
| `deliver` | Build and deliver files to `$DST_DIR` / `$UTL_DIR` / `$WIN_DIR` |
| `bundle` | Package files in `$DST_DIR` into a distributable SKU |
| `sku` | Deliver + bundle (equivalent to `make deliver bundle`) |
| `clean` | Remove all build artifacts |
| `notarget` | Remove linked executables only |
| `srclist` | List all source files (stdout) |
| `xrflist` | Cross-reference list of all names in object files |
| `lint` | Run lint on all source files |

**Output binaries:**

| File | Description |
|------|-------------|
| `product/xt` | Terminal (curses) binary |
| `product/xtx` | X11 binary |

---

## Patches Applied (this fork)

The following fixes allow the source to compile cleanly on modern 64-bit Linux with GCC 14+. No functional behaviour has been changed.

| File | Fix |
|------|-----|
| `libres/resmkch.c` | Add missing `int` return type on `res_get_list()` — illegal in C99+, hard error in GCC 14+ |
| `libsys/sys_defs.h` | Replace `X_OFFSET_OF` macro (cast pointer to `int`, wrong on 64-bit) with `offsetof()` from `<stddef.h>` |
| `libtcap/tctermcap.c` | Declare local `p` as `const char *` to fix discarded const-qualifier warning from `strchr()` |
| `libxvt/xvtx.h` + `xvtxevent.c` | Replace deprecated `XKeycodeToKeysym()` with `XkbKeycodeToKeysym()` from `<X11/XKBlib.h>` |
| `termfiles/xterm-256color.trm` | Add terminal definition for `xterm-256color` (copy of `xterm.trm`) — required by most modern terminal emulators |

---

## Terminal-Capabilities Configuration

UnixTree uses its own **ecurses** (extended curses) library rather than the system curses. It supports both `termcap` and `terminfo` databases and auto-detects which is in use at runtime.

**Term-files** (`.trm`) provide extended capabilities beyond what the system database holds. They live in the `termfiles/` directory of the source and are installed to `$XTPATH/trm/`. A term-file for a given `$TERM` value overrides any corresponding database entry.

See `support/termfiles.txt` for documentation on the term-file format.

**Termutils programs** (built in `termutils/`):

| Program | Description |
|---------|-------------|
| `dispbox` | Display box-drawing characters |
| `dispclrs` | Display all colours |
| `dispkeys` | Display key-stroke names (use `-d` for raw data) |
| `dispterm` | Display full terminal configuration |
| `saveterm` | Write out a term-file for a given `$TERM` |
| `dumpterm` | Dump termcap/terminfo database entry |
| `playback` | Replay a saved screen log file |

---

## Library Structure

**ecurses sub-libraries:**

| Library | Purpose |
|---------|---------|
| `libsys` | Memory allocation, command-line processing, threads |
| `libterm` | Device I/O |
| `libtcap` | termcap/terminfo interface |
| `libwin` | curses functions |
| `libecurses` | Combined extended curses library (built from the above) |

**Standalone libraries:**

| Library | Purpose |
|---------|---------|
| `libxvt` | xterm emulation (requires X11) |
| `libos` | OS-dependent functions (mount table, free space) |
| `libdiff` | File diff (GNU diff, various authors) |
| `libgzip` | GZIP compression (Jean-loup Gailly & Mark Adler) |
| `libmagic` | File type detection by magic number (Ian F. Darwin) |
| `libxpm` | XPM pixmap library (XFree86) |
| `libutils` | General-purpose utilities |
| `libftp` | FTP functions |
| `libres` | Resource-file processing |
| `libprd` | Main program code |

---

## Tips

- **Tab stop:** All source files use a tab stop of 4. In vi: `:set ts=4`.
- **Signal debugging:** Set `TC_IGNORE_SIGNALS` to allow core dumps (otherwise signals are caught to restore terminal state). After a crash, restore the terminal with `^j` then `stty sane^j`.
- **Memory debugging:** Run with `-ZM` to print malloc statistics on exit. `-ZMM` also dumps the malloc chain if there are leaks.
- **Don't source `build` twice** in the same shell. Use a sub-shell (`ksh` / `bash`) and `exit` back out when you need to reload the environment.
- **Multiple platforms:** Use `bin/makesrc.sh` and `bin/linksrc.sh` to create symlink-based clone trees for building on multiple platforms from a shared NFS source directory.

---

## License

GPL — see [COPYING](COPYING).

Bundled third-party code carries its own licence:
- **libgzip** — zlib licence (Jean-loup Gailly & Mark Adler)
- **libmagic** — BSD (Ian F. Darwin)
- **libdiff** — GPL (various authors)
- **libutils** — regexp code by Henry Spencer
- **libform / libmenu** — Juergen Pfeifer
- **libpanel** — Zeyd M. Ben-Halim & Eric S. Raymond
- **libxpm** — XFree86
