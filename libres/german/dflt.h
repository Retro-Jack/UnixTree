/* ALL EDITS WILL BE LOST - This is a generated file. */

#ifndef DFLT_H
#define DFLT_H

/* ------------------------------------------------------------------------ */
/* strings for	"default" processing */
/* */
/* These entries are in the same order they appear in the config menu. */
/* */
/* Each option has 4 entries: */
/* */
/*	m_default_f_*	option name in config file */
/*	m_default_m_*	option name in config menu */
/*	m_default_p_*	prompt line for config menu */
/*	m_default_v_*	default value */
/* */
/* Note that the m_default_f_* entries should NOT be translated, so that */
/* the config files are language-independent. */
/* */

/* ------------------------------------------------------------------------ */
/* never use entry 0 (indicates end-of-tables) */
/* */
#define m_default_zero_entry    	0

/* ------------------------------------------------------------------------ */
/* config menu setting headings */
/* */
#define m_default_hdg_disp      	1
#define m_default_hdg_win       	2
#define m_default_hdg_dir       	3
#define m_default_hdg_file      	4
#define m_default_hdg_comp      	5
#define m_default_hdg_log       	6
#define m_default_hdg_sec       	7
#define m_default_hdg_msc1      	8
#define m_default_hdg_msc2      	9
#define m_default_hdg_arch      	10
#define m_default_hdg_view      	11
#define m_default_hdg_intl      	12
#define m_default_hdg_diff      	13
#define m_default_hdg_prt       	14

/* ------------------------------------------------------------------------ */
/* config menu color headings */
/* */
#define m_default_hdg_c1        	15
#define m_default_hdg_c2        	16
#define m_default_hdg_c3        	17
#define m_default_hdg_c4        	18
#define m_default_hdg_c5        	19
#define m_default_hdg_c6        	20
#define m_default_hdg_c7        	21

/* ------------------------------------------------------------------------ */
/* config menu attribute headings */
/* */
#define m_default_hdg_m1        	22
#define m_default_hdg_m2        	23
#define m_default_hdg_m3        	24
#define m_default_hdg_m4        	25
#define m_default_hdg_m5        	26
#define m_default_hdg_m6        	27
#define m_default_hdg_m7        	28

/* ------------------------------------------------------------------------ */
/*	"yes" words list */
/* */
#define m_default_f_on          	29
#define m_default_m_on          	30

#define m_default_f_yes         	31
#define m_default_m_yes         	32

#define m_default_f_true        	33
#define m_default_m_true        	34

/* ------------------------------------------------------------------------ */
/*	"no" words list */
/* */
#define m_default_f_off         	35
#define m_default_m_off         	36

#define m_default_f_no          	37
#define m_default_m_no          	38

#define m_default_f_false       	39
#define m_default_m_false       	40

/* ------------------------------------------------------------------------ */
/* autolog options list */
/* */
#define m_default_auto_f_d      	41
#define m_default_auto_m_d      	42

#define m_default_auto_f_c      	43
#define m_default_auto_m_c      	44

#define m_default_auto_f_l      	45
#define m_default_auto_m_l      	46

/* ------------------------------------------------------------------------ */
/* sort order list */
/* */
#define m_default_f_asc         	47
#define m_default_m_asc         	48

#define m_default_f_desc        	49
#define m_default_m_desc        	50

/* ------------------------------------------------------------------------ */
/* sort type list */
/* */
#define m_default_f_name        	51
#define m_default_m_name        	52

#define m_default_f_ext         	53
#define m_default_m_ext         	54

#define m_default_f_date        	55
#define m_default_m_date        	56

#define m_default_f_inode       	57
#define m_default_m_inode       	58

#define m_default_f_links       	59
#define m_default_m_links       	60

#define m_default_f_size        	61
#define m_default_m_size        	62

#define m_default_f_uns         	63
#define m_default_m_uns         	64

/* ------------------------------------------------------------------------ */
/* screen type list */
/* */
#define m_default_f_auto        	65
#define m_default_m_auto        	66

#define m_default_f_color       	67
#define m_default_m_color       	68

#define m_default_f_mono        	69
#define m_default_m_mono        	70

/* ------------------------------------------------------------------------ */
/* file display format list */
/* */
#define m_default_f_fname1      	71
#define m_default_m_fname1      	72

#define m_default_f_fname3      	73
#define m_default_m_fname3      	74

#define m_default_f_fsize       	75
#define m_default_m_fsize       	76

#define m_default_f_fdate       	77
#define m_default_m_fdate       	78

#define m_default_f_fperms      	79
#define m_default_m_fperms      	80

/* ------------------------------------------------------------------------ */
/* directory display format list */
/* */
#define m_default_f_dname       	81
#define m_default_m_dname       	82

#define m_default_f_dsize       	83
#define m_default_m_dsize       	84

#define m_default_f_ddate       	85
#define m_default_m_ddate       	86

#define m_default_f_dperms      	87
#define m_default_m_dperms      	88

/* ------------------------------------------------------------------------ */
/* logging method list */
/* */
#define m_default_f_loga        	89
#define m_default_m_loga        	90

#define m_default_f_logm        	91
#define m_default_m_logm        	92

/* ------------------------------------------------------------------------ */
/* time display format list */
/* */
#define m_default_f_time12      	93
#define m_default_m_time12      	94

#define m_default_f_time24      	95
#define m_default_m_time24      	96

/* ------------------------------------------------------------------------ */
/* date display format list */
/* */
#define m_default_f_datemdy     	97
#define m_default_m_datemdy     	98

#define m_default_f_datedmy     	99
#define m_default_m_datedmy     	100

#define m_default_f_dateymd     	101
#define m_default_m_dateymd     	102

/* ------------------------------------------------------------------------ */
/* compression type list */
/* */
#define m_default_f_complzw     	103
#define m_default_m_complzw     	104

#define m_default_f_compgzip    	105
#define m_default_m_compgzip    	106

#define m_default_f_comppack    	107
#define m_default_m_comppack    	108

/* ------------------------------------------------------------------------ */
/* cpio header format list */
/* */
#define m_default_f_cpiobin     	109
#define m_default_m_cpiobin     	110

#define m_default_f_cpiobbs     	111
#define m_default_m_cpiobbs     	112

#define m_default_f_cpiochr     	113
#define m_default_m_cpiochr     	114

#define m_default_f_cpioasc     	115
#define m_default_m_cpioasc     	116

#define m_default_f_cpiocrc     	117
#define m_default_m_cpiocrc     	118

/* ------------------------------------------------------------------------ */
/* tar header format list */
/* */
#define m_default_f_tarold      	119
#define m_default_m_tarold      	120

#define m_default_f_tarus       	121
#define m_default_m_tarus       	122

/* ------------------------------------------------------------------------ */
/* viewer format list */
/* */
#define m_default_f_vwrauto     	123
#define m_default_m_vwrauto     	124

#define m_default_f_vwrasc      	125
#define m_default_m_vwrasc      	126

#define m_default_f_vwrwrap     	127
#define m_default_m_vwrwrap     	128

#define m_default_f_vwrhex      	129
#define m_default_m_vwrhex      	130

#define m_default_f_vwrdump     	131
#define m_default_m_vwrdump     	132

/* ------------------------------------------------------------------------ */
/* date display type list */
/* */
#define m_default_date_f_m      	133
#define m_default_date_m_m      	134

#define m_default_date_f_r      	135
#define m_default_date_m_r      	136

#define m_default_date_f_c      	137
#define m_default_date_m_c      	138

/* ------------------------------------------------------------------------ */
/* color fg names */
/* */
#define m_default_fg_f_00       	139
#define m_default_fg_m_00       	140

#define m_default_fg_f_01       	141
#define m_default_fg_m_01       	142

#define m_default_fg_f_02       	143
#define m_default_fg_m_02       	144

#define m_default_fg_f_03       	145
#define m_default_fg_m_03       	146

#define m_default_fg_f_04       	147
#define m_default_fg_m_04       	148

#define m_default_fg_f_05       	149
#define m_default_fg_m_05       	150

#define m_default_fg_f_06       	151
#define m_default_fg_m_06       	152

#define m_default_fg_f_07       	153
#define m_default_fg_m_07       	154

#define m_default_fg_f_08       	155
#define m_default_fg_m_08       	156

#define m_default_fg_f_09       	157
#define m_default_fg_m_09       	158

#define m_default_fg_f_10       	159
#define m_default_fg_m_10       	160

#define m_default_fg_f_11       	161
#define m_default_fg_m_11       	162

#define m_default_fg_f_12       	163
#define m_default_fg_m_12       	164

#define m_default_fg_f_13       	165
#define m_default_fg_m_13       	166

#define m_default_fg_f_14       	167
#define m_default_fg_m_14       	168

#define m_default_fg_f_15       	169
#define m_default_fg_m_15       	170

/* ------------------------------------------------------------------------ */
/* color bg names */
/* */
#define m_default_bg_f_00       	171
#define m_default_bg_m_00       	172

#define m_default_bg_f_01       	173
#define m_default_bg_m_01       	174

#define m_default_bg_f_02       	175
#define m_default_bg_m_02       	176

#define m_default_bg_f_03       	177
#define m_default_bg_m_03       	178

#define m_default_bg_f_04       	179
#define m_default_bg_m_04       	180

#define m_default_bg_f_05       	181
#define m_default_bg_m_05       	182

#define m_default_bg_f_06       	183
#define m_default_bg_m_06       	184

#define m_default_bg_f_07       	185
#define m_default_bg_m_07       	186

#define m_default_bg_f_08       	187
#define m_default_bg_m_08       	188

#define m_default_bg_f_09       	189
#define m_default_bg_m_09       	190

#define m_default_bg_f_10       	191
#define m_default_bg_m_10       	192

#define m_default_bg_f_11       	193
#define m_default_bg_m_11       	194

#define m_default_bg_f_12       	195
#define m_default_bg_m_12       	196

#define m_default_bg_f_13       	197
#define m_default_bg_m_13       	198

#define m_default_bg_f_14       	199
#define m_default_bg_m_14       	200

#define m_default_bg_f_15       	201
#define m_default_bg_m_15       	202

/* ------------------------------------------------------------------------ */
/* attribute names */
/* */
#define m_default_attr_f_0      	203
#define m_default_attr_m_0      	204

#define m_default_attr_f_1      	205
#define m_default_attr_m_1      	206

#define m_default_attr_f_2      	207
#define m_default_attr_m_2      	208

#define m_default_attr_f_3      	209
#define m_default_attr_m_3      	210

#define m_default_attr_f_4      	211
#define m_default_attr_m_4      	212

#define m_default_attr_f_5      	213
#define m_default_attr_m_5      	214

#define m_default_attr_f_6      	215
#define m_default_attr_m_6      	216

#define m_default_attr_f_7      	217
#define m_default_attr_m_7      	218

/* ------------------------------------------------------------------------ */
/* display options */
/* */
#define m_default_f_sm          	219
#define m_default_m_sm          	220
#define m_default_p_sm          	221
#define m_default_v_sm          	222

#define m_default_f_sbi         	223
#define m_default_m_sbi         	224
#define m_default_p_sbi         	225
#define m_default_v_sbi         	226

#define m_default_f_uac         	227
#define m_default_m_uac         	228
#define m_default_p_uac         	229
#define m_default_v_uac         	230

/* ------------------------------------------------------------------------ */
/* window options */
/* */
#define m_default_f_win         	231
#define m_default_m_win         	232
#define m_default_p_win         	233
#define m_default_v_win         	234

#define m_default_f_ptr         	235
#define m_default_m_ptr         	236
#define m_default_p_ptr         	237
#define m_default_v_ptr         	238

#define m_default_f_col         	239
#define m_default_m_col         	240
#define m_default_p_col         	241
#define m_default_v_col         	242

#define m_default_f_row         	243
#define m_default_m_row         	244
#define m_default_p_row         	245
#define m_default_v_row         	246

#define m_default_f_rgf         	247
#define m_default_m_rgf         	248
#define m_default_p_rgf         	249
#define m_default_v_rgf         	250

#define m_default_f_bdf         	251
#define m_default_m_bdf         	252
#define m_default_p_bdf         	253
#define m_default_v_bdf         	254

#define m_default_f_xvt         	255
#define m_default_m_xvt         	256
#define m_default_p_xvt         	257
#define m_default_v_xvt         	258

/* ------------------------------------------------------------------------ */
/* directory window */
/* */
#define m_default_f_df          	259
#define m_default_m_df          	260
#define m_default_p_df          	261
#define m_default_v_df          	262

#define m_default_f_ds          	263
#define m_default_m_ds          	264
#define m_default_p_ds          	265
#define m_default_v_ds          	266

/* ------------------------------------------------------------------------ */
/* file window */
/* */
#define m_default_f_ff          	267
#define m_default_m_ff          	268
#define m_default_p_ff          	269
#define m_default_v_ff          	270

#define m_default_f_st          	271
#define m_default_m_st          	272
#define m_default_p_st          	273
#define m_default_v_st          	274

#define m_default_f_so          	275
#define m_default_m_so          	276
#define m_default_p_so          	277
#define m_default_v_so          	278

#define m_default_f_sbp         	279
#define m_default_m_sbp         	280
#define m_default_p_sbp         	281
#define m_default_v_sbp         	282

#define m_default_f_esw         	283
#define m_default_m_esw         	284
#define m_default_p_esw         	285
#define m_default_v_esw         	286

#define m_default_f_alo         	287
#define m_default_m_alo         	288
#define m_default_p_alo         	289
#define m_default_v_alo         	290

#define m_default_f_dfc         	291
#define m_default_m_dfc         	292
#define m_default_p_dfc         	293
#define m_default_v_dfc         	294

/* ------------------------------------------------------------------------ */
/* compression */
/* */
#define m_default_f_cpt         	295
#define m_default_m_cpt         	296
#define m_default_p_cpt         	297
#define m_default_v_cpt         	298

/* ------------------------------------------------------------------------ */
/* node logging */
/* */
#define m_default_f_lm          	299
#define m_default_m_lm          	300
#define m_default_p_lm          	301
#define m_default_v_lm          	302

#define m_default_f_dn          	303
#define m_default_m_dn          	304
#define m_default_p_dn          	305
#define m_default_v_dn          	306

#define m_default_f_htn         	307
#define m_default_m_htn         	308
#define m_default_p_htn         	309
#define m_default_v_htn         	310

#define m_default_f_lfo         	311
#define m_default_m_lfo         	312
#define m_default_p_lfo         	313
#define m_default_v_lfo         	314

#define m_default_f_sdl         	315
#define m_default_m_sdl         	316
#define m_default_p_sdl         	317
#define m_default_v_sdl         	318

#define m_default_f_cmp         	319
#define m_default_m_cmp         	320
#define m_default_p_cmp         	321
#define m_default_v_cmp         	322

#define m_default_f_rsl         	323
#define m_default_m_rsl         	324
#define m_default_p_rsl         	325
#define m_default_v_rsl         	326

#define m_default_f_ali         	327
#define m_default_m_ali         	328
#define m_default_p_ali         	329
#define m_default_v_ali         	330

#define m_default_f_flg         	331
#define m_default_m_flg         	332
#define m_default_p_flg         	333
#define m_default_v_flg         	334

#define m_default_f_ftd         	335
#define m_default_m_ftd         	336
#define m_default_p_ftd         	337
#define m_default_v_ftd         	338

#define m_default_f_fti         	339
#define m_default_m_fti         	340
#define m_default_p_fti         	341
#define m_default_v_fti         	342

/* ------------------------------------------------------------------------ */
/* security */
/* */
#define m_default_f_ro          	343
#define m_default_m_ro          	344
#define m_default_p_ro          	345
#define m_default_v_ro          	346

/* ------------------------------------------------------------------------ */
/* miscellaneous 1 */
/* */
#define m_default_f_boe         	347
#define m_default_m_boe         	348
#define m_default_p_boe         	349
#define m_default_v_boe         	350

#define m_default_f_kd          	351
#define m_default_m_kd          	352
#define m_default_p_kd          	353
#define m_default_v_kd          	354

#define m_default_f_dc          	355
#define m_default_m_dc          	356
#define m_default_p_dc          	357
#define m_default_v_dc          	358

#define m_default_f_kfs         	359
#define m_default_m_kfs         	360
#define m_default_p_kfs         	361
#define m_default_v_kfs         	362

#define m_default_f_pfq         	363
#define m_default_m_pfq         	364
#define m_default_p_pfq         	365
#define m_default_v_pfq         	366

#define m_default_f_bep         	367
#define m_default_m_bep         	368
#define m_default_p_bep         	369
#define m_default_v_bep         	370

#define m_default_f_pro         	371
#define m_default_m_pro         	372
#define m_default_p_pro         	373
#define m_default_v_pro         	374

#define m_default_f_hl          	375
#define m_default_m_hl          	376
#define m_default_p_hl          	377
#define m_default_v_hl          	378

#define m_default_f_ws          	379
#define m_default_m_ws          	380
#define m_default_p_ws          	381
#define m_default_v_ws          	382

#define m_default_f_stb         	383
#define m_default_m_stb         	384
#define m_default_p_stb         	385
#define m_default_v_stb         	386

#define m_default_f_eam         	387
#define m_default_m_eam         	388
#define m_default_p_eam         	389
#define m_default_v_eam         	390

#define m_default_f_sft         	391
#define m_default_m_sft         	392
#define m_default_p_sft         	393
#define m_default_v_sft         	394

#define m_default_f_sal         	395
#define m_default_m_sal         	396
#define m_default_p_sal         	397
#define m_default_v_sal         	398

/* ------------------------------------------------------------------------ */
/* miscellaneous 2 */
/* */
#define m_default_f_dtp         	399
#define m_default_m_dtp         	400
#define m_default_p_dtp         	401
#define m_default_v_dtp         	402

#define m_default_f_edi         	403
#define m_default_m_edi         	404
#define m_default_p_edi         	405
#define m_default_v_edi_u       	406
#define m_default_v_edi_w       	407

#define m_default_f_vwr         	408
#define m_default_m_vwr         	409
#define m_default_p_vwr         	410
#define m_default_v_vwr         	411

#define m_default_f_hex         	412
#define m_default_m_hex         	413
#define m_default_p_hex         	414
#define m_default_v_hex         	415

#define m_default_f_mse         	416
#define m_default_m_mse         	417
#define m_default_p_mse         	418
#define m_default_v_mse         	419

#define m_default_f_ins         	420
#define m_default_m_ins         	421
#define m_default_p_ins         	422
#define m_default_v_ins         	423

#define m_default_f_ign         	424
#define m_default_m_ign         	425
#define m_default_p_ign         	426
#define m_default_v_ign         	427

#define m_default_f_isn         	428
#define m_default_m_isn         	429
#define m_default_p_isn         	430
#define m_default_v_isn         	431

#define m_default_f_smd         	432
#define m_default_m_smd         	433
#define m_default_p_smd         	434
#define m_default_v_smd         	435

/* ------------------------------------------------------------------------ */
/* archive */
/* */
#define m_default_f_ch          	436
#define m_default_m_ch          	437
#define m_default_p_ch          	438
#define m_default_v_ch          	439

#define m_default_f_th          	440
#define m_default_m_th          	441
#define m_default_p_th          	442
#define m_default_v_th          	443

#define m_default_f_ibt         	444
#define m_default_m_ibt         	445
#define m_default_p_ibt         	446
#define m_default_v_ibt         	447

/* ------------------------------------------------------------------------ */
/* viewer */
/* */
#define m_default_f_vwm         	448
#define m_default_m_vwm         	449
#define m_default_p_vwm         	450
#define m_default_v_vwm         	451

#define m_default_f_tw          	452
#define m_default_m_tw          	453
#define m_default_p_tw          	454
#define m_default_v_tw          	455

#define m_default_f_msk         	456
#define m_default_m_msk         	457
#define m_default_p_msk         	458
#define m_default_v_msk         	459

#define m_default_f_ecf         	460
#define m_default_m_ecf         	461
#define m_default_p_ecf         	462
#define m_default_v_ecf         	463

/* ------------------------------------------------------------------------ */
/* international */
/* */
#define m_default_f_tmf         	464
#define m_default_m_tmf         	465
#define m_default_p_tmf         	466
#define m_default_v_tmf         	467

#define m_default_f_dtf         	468
#define m_default_m_dtf         	469
#define m_default_p_dtf         	470
#define m_default_v_dtf         	471

#define m_default_f_tsc         	472
#define m_default_m_tsc         	473
#define m_default_p_tsc         	474
#define m_default_v_tsc         	475

#define m_default_f_dtc         	476
#define m_default_m_dtc         	477
#define m_default_p_dtc         	478
#define m_default_v_dtc         	479

#define m_default_f_nsc         	480
#define m_default_m_nsc         	481
#define m_default_p_nsc         	482
#define m_default_v_nsc         	483

#define m_default_f_lang        	484
#define m_default_m_lang        	485
#define m_default_p_lang        	486
#define m_default_v_lang        	487

/* ------------------------------------------------------------------------ */
/* file compare */
/* */
#define m_default_f_dfr         	488
#define m_default_m_dfr         	489
#define m_default_p_dfr         	490
#define m_default_v_dfr         	491

#define m_default_f_dgn         	492
#define m_default_m_dgn         	493
#define m_default_p_dgn         	494
#define m_default_v_dgn         	495

#define m_default_f_dws         	496
#define m_default_m_dws         	497
#define m_default_p_dws         	498
#define m_default_v_dws         	499

#define m_default_f_dsn         	500
#define m_default_m_dsn         	501
#define m_default_p_dsn         	502
#define m_default_v_dsn         	503

#define m_default_f_dod         	504
#define m_default_m_dod         	505
#define m_default_p_dod         	506
#define m_default_v_dod         	507

#define m_default_f_dpw         	508
#define m_default_m_dpw         	509
#define m_default_p_dpw         	510
#define m_default_v_dpw         	511

#define m_default_f_dpt         	512
#define m_default_m_dpt         	513
#define m_default_p_dpt         	514
#define m_default_v_dpt_u       	515
#define m_default_v_dpt_w       	516

/* ------------------------------------------------------------------------ */
/* printer options */
/* */
#define m_default_f_pri         	517
#define m_default_m_pri         	518
#define m_default_p_pri         	519
#define m_default_v_pri         	520

#define m_default_f_prf         	521
#define m_default_m_prf         	522
#define m_default_p_prf         	523
#define m_default_v_prf         	524

#define m_default_f_ps          	525
#define m_default_m_ps          	526
#define m_default_p_ps          	527
#define m_default_v_ps          	528

#define m_default_f_pl          	529
#define m_default_m_pl          	530
#define m_default_p_pl          	531
#define m_default_v_pl          	532

#define m_default_f_pm          	533
#define m_default_m_pm          	534
#define m_default_p_pm          	535
#define m_default_v_pm          	536

#define m_default_f_cpe         	537
#define m_default_m_cpe         	538
#define m_default_p_cpe         	539
#define m_default_v_cpe         	540

/* ------------------------------------------------------------------------ */
/* regular window colors */
/* */
#define m_default_f_rlc         	541
#define m_default_m_rlc         	542
#define m_default_p_rlc         	543
#define m_default_v_rlc         	544

#define m_default_f_rhc         	545
#define m_default_m_rhc         	546
#define m_default_p_rhc         	547
#define m_default_v_rhc         	548

#define m_default_f_rcc         	549
#define m_default_m_rcc         	550
#define m_default_p_rcc         	551
#define m_default_v_rcc         	552

#define m_default_f_rmc         	553
#define m_default_m_rmc         	554
#define m_default_p_rmc         	555
#define m_default_v_rmc         	556

/* ------------------------------------------------------------------------ */
/* showall window colors */
/* */
#define m_default_f_slc         	557
#define m_default_m_slc         	558
#define m_default_p_slc         	559
#define m_default_v_slc         	560

#define m_default_f_shc         	561
#define m_default_m_shc         	562
#define m_default_p_shc         	563
#define m_default_v_shc         	564

#define m_default_f_scc         	565
#define m_default_m_scc         	566
#define m_default_p_scc         	567
#define m_default_v_scc         	568

#define m_default_f_smc         	569
#define m_default_m_smc         	570
#define m_default_p_smc         	571
#define m_default_v_smc         	572

/* ------------------------------------------------------------------------ */
/* autoview window colors */
/* */
#define m_default_f_alc         	573
#define m_default_m_alc         	574
#define m_default_p_alc         	575
#define m_default_v_alc         	576

#define m_default_f_ahc         	577
#define m_default_m_ahc         	578
#define m_default_p_ahc         	579
#define m_default_v_ahc         	580

#define m_default_f_acc         	581
#define m_default_m_acc         	582
#define m_default_p_acc         	583
#define m_default_v_acc         	584

#define m_default_f_amc         	585
#define m_default_m_amc         	586
#define m_default_p_amc         	587
#define m_default_v_amc         	588

/* ------------------------------------------------------------------------ */
/* diff colors */
/* */
#define m_default_f_dsc         	589
#define m_default_m_dsc         	590
#define m_default_p_dsc         	591
#define m_default_v_dsc         	592

#define m_default_f_ddc         	593
#define m_default_m_ddc         	594
#define m_default_p_ddc         	595
#define m_default_v_ddc         	596

#define m_default_f_dlc         	597
#define m_default_m_dlc         	598
#define m_default_p_dlc         	599
#define m_default_v_dlc         	600

#define m_default_f_dnc         	601
#define m_default_m_dnc         	602
#define m_default_p_dnc         	603
#define m_default_v_dnc         	604

/* ------------------------------------------------------------------------ */
/* help colors */
/* */
#define m_default_f_hblc        	605
#define m_default_m_hblc        	606
#define m_default_p_hblc        	607
#define m_default_v_hblc        	608

#define m_default_f_hbhc        	609
#define m_default_m_hbhc        	610
#define m_default_p_hbhc        	611
#define m_default_v_hbhc        	612

#define m_default_f_hbbc        	613
#define m_default_m_hbbc        	614
#define m_default_p_hbbc        	615
#define m_default_v_hbbc        	616

#define m_default_f_hhlc        	617
#define m_default_m_hhlc        	618
#define m_default_p_hhlc        	619
#define m_default_v_hhlc        	620

#define m_default_f_gbc         	621
#define m_default_m_gbc         	622
#define m_default_p_gbc         	623
#define m_default_v_gbc         	624

#define m_default_f_hglc        	625
#define m_default_m_hglc        	626
#define m_default_p_hglc        	627
#define m_default_v_hglc        	628

/* ------------------------------------------------------------------------ */
/* menu colors */
/* */
#define m_default_f_mlc         	629
#define m_default_m_mlc         	630
#define m_default_p_mlc         	631
#define m_default_v_mlc         	632

#define m_default_f_mhc         	633
#define m_default_m_mhc         	634
#define m_default_p_mhc         	635
#define m_default_v_mhc         	636

#define m_default_f_mcc         	637
#define m_default_m_mcc         	638
#define m_default_p_mcc         	639
#define m_default_v_mcc         	640

#define m_default_f_mbc         	641
#define m_default_m_mbc         	642
#define m_default_p_mbc         	643
#define m_default_v_mbc         	644

/* ------------------------------------------------------------------------ */
/* miscellaneous colors */
/* */
#define m_default_f_bc          	645
#define m_default_m_bc          	646
#define m_default_p_bc          	647
#define m_default_v_bc          	648

#define m_default_f_cc          	649
#define m_default_m_cc          	650
#define m_default_p_cc          	651
#define m_default_v_cc          	652

#define m_default_f_ec          	653
#define m_default_m_ec          	654
#define m_default_p_ec          	655
#define m_default_v_ec          	656

#define m_default_f_msc         	657
#define m_default_m_msc         	658
#define m_default_p_msc         	659
#define m_default_v_msc         	660

#define m_default_f_mmc         	661
#define m_default_m_mmc         	662
#define m_default_p_mmc         	663
#define m_default_v_mmc         	664

#define m_default_f_escc        	665
#define m_default_m_escc        	666
#define m_default_p_escc        	667
#define m_default_v_escc        	668

#define m_default_f_xc          	669
#define m_default_m_xc          	670
#define m_default_p_xc          	671
#define m_default_v_xc          	672

/* ------------------------------------------------------------------------ */
/* regular window attributes */
/* */
#define m_default_f_rlm         	673
#define m_default_m_rlm         	674
#define m_default_p_rlm         	675
#define m_default_v_rlm         	676

#define m_default_f_rhm         	677
#define m_default_m_rhm         	678
#define m_default_p_rhm         	679
#define m_default_v_rhm         	680

#define m_default_f_rcm         	681
#define m_default_m_rcm         	682
#define m_default_p_rcm         	683
#define m_default_v_rcm         	684

#define m_default_f_rmm         	685
#define m_default_m_rmm         	686
#define m_default_p_rmm         	687
#define m_default_v_rmm         	688

/* ------------------------------------------------------------------------ */
/* showall window attributes */
/* */
#define m_default_f_slm         	689
#define m_default_m_slm         	690
#define m_default_p_slm         	691
#define m_default_v_slm         	692

#define m_default_f_shm         	693
#define m_default_m_shm         	694
#define m_default_p_shm         	695
#define m_default_v_shm         	696

#define m_default_f_scm         	697
#define m_default_m_scm         	698
#define m_default_p_scm         	699
#define m_default_v_scm         	700

#define m_default_f_smm         	701
#define m_default_m_smm         	702
#define m_default_p_smm         	703
#define m_default_v_smm         	704

/* ------------------------------------------------------------------------ */
/* autoview window attributes */
/* */
#define m_default_f_alm         	705
#define m_default_m_alm         	706
#define m_default_p_alm         	707
#define m_default_v_alm         	708

#define m_default_f_ahm         	709
#define m_default_m_ahm         	710
#define m_default_p_ahm         	711
#define m_default_v_ahm         	712

#define m_default_f_acm         	713
#define m_default_m_acm         	714
#define m_default_p_acm         	715
#define m_default_v_acm         	716

#define m_default_f_amm         	717
#define m_default_m_amm         	718
#define m_default_p_amm         	719
#define m_default_v_amm         	720

/* ------------------------------------------------------------------------ */
/* diff attributes */
/* */
#define m_default_f_dsm         	721
#define m_default_m_dsm         	722
#define m_default_p_dsm         	723
#define m_default_v_dsm         	724

#define m_default_f_ddm         	725
#define m_default_m_ddm         	726
#define m_default_p_ddm         	727
#define m_default_v_ddm         	728

#define m_default_f_dlm         	729
#define m_default_m_dlm         	730
#define m_default_p_dlm         	731
#define m_default_v_dlm         	732

#define m_default_f_dnm         	733
#define m_default_m_dnm         	734
#define m_default_p_dnm         	735
#define m_default_v_dnm         	736

/* ------------------------------------------------------------------------ */
/* help attributes */
/* */
#define m_default_f_hblm        	737
#define m_default_m_hblm        	738
#define m_default_p_hblm        	739
#define m_default_v_hblm        	740

#define m_default_f_hbhm        	741
#define m_default_m_hbhm        	742
#define m_default_p_hbhm        	743
#define m_default_v_hbhm        	744

#define m_default_f_hbbm        	745
#define m_default_m_hbbm        	746
#define m_default_p_hbbm        	747
#define m_default_v_hbbm        	748

#define m_default_f_hhlm        	749
#define m_default_m_hhlm        	750
#define m_default_p_hhlm        	751
#define m_default_v_hhlm        	752

#define m_default_f_gbm         	753
#define m_default_m_gbm         	754
#define m_default_p_gbm         	755
#define m_default_v_gbm         	756

#define m_default_f_hglm        	757
#define m_default_m_hglm        	758
#define m_default_p_hglm        	759
#define m_default_v_hglm        	760

/* ------------------------------------------------------------------------ */
/* menu attributes */
/* */
#define m_default_f_mlm         	761
#define m_default_m_mlm         	762
#define m_default_p_mlm         	763
#define m_default_v_mlm         	764

#define m_default_f_mhm         	765
#define m_default_m_mhm         	766
#define m_default_p_mhm         	767
#define m_default_v_mhm         	768

#define m_default_f_mcm         	769
#define m_default_m_mcm         	770
#define m_default_p_mcm         	771
#define m_default_v_mcm         	772

#define m_default_f_mbm         	773
#define m_default_m_mbm         	774
#define m_default_p_mbm         	775
#define m_default_v_mbm         	776

/* ------------------------------------------------------------------------ */
/* miscellaneous attributes */
/* */
#define m_default_f_bm          	777
#define m_default_m_bm          	778
#define m_default_p_bm          	779
#define m_default_v_bm          	780

#define m_default_f_cm          	781
#define m_default_m_cm          	782
#define m_default_p_cm          	783
#define m_default_v_cm          	784

#define m_default_f_em          	785
#define m_default_m_em          	786
#define m_default_p_em          	787
#define m_default_v_em          	788

#define m_default_f_msm         	789
#define m_default_m_msm         	790
#define m_default_p_msm         	791
#define m_default_v_msm         	792

#define m_default_f_mmm         	793
#define m_default_m_mmm         	794
#define m_default_p_mmm         	795
#define m_default_v_mmm         	796

#define m_default_f_escm        	797
#define m_default_m_escm        	798
#define m_default_p_escm        	799
#define m_default_v_escm        	800

#define m_default_f_xm          	801
#define m_default_m_xm          	802
#define m_default_p_xm          	803
#define m_default_v_xm          	804

#define NUM_DFLT	805

#endif /* DFLT_H */
