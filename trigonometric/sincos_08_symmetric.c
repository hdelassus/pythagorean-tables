// Pythagorean-triple-based table generation
//   for trigonometric function evaluation
//
// [Fri Nov  4 12:11:10 2016]
//
// Table generated for the following parameters
//     --index-size=8
//     --addressing=symmetric
//     --algorithm=heuristic

static const double lcm = 314201225;
static const double cos_sin[202][3] =
{
  { /* A = */ 0        , /* B = */ 314201225, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0        ,1        ,1        ) */
  { /* A = */ 1405815  , /* B = */ 314198080, /* corr =  0.000568015 */ +0x1.29cdbed0b1c39p-11  },  /* ppt = (447      ,99904    ,99905    ) */
  { /* A = */ 2596660  , /* B = */ 314190495, /* corr =  0.000451916 */ +0x1.d9de374e2b17ap-12  },  /* ppt = (484      ,58563    ,58565    ) */
  { /* A = */ 3750505  , /* B = */ 314178840, /* corr =  0.000218167 */ +0x1.c987bb1a0f400p-13  },  /* ppt = (20273    ,1698264  ,1698385  ) */
  { /* A = */ 4959628  , /* B = */ 314162079, /* corr =  0.000160534 */ +0x1.50a9cc80ec1cep-13  },  /* ppt = (134044   ,8490867  ,8491925  ) */
  { /* A = */ 6327191  , /* B = */ 314137512, /* corr =  0.000607496 */ +0x1.3e80c04717cc9p-11  },  /* ppt = (16783    ,833256   ,833425   ) */
  { /* A = */ 7570015  , /* B = */ 314110020, /* corr =  0.00065772  */ +0x1.58d5a5196127fp-11  },  /* ppt = (83       ,3444     ,3445     ) */
  { /* A = */ 8689655  , /* B = */ 314081040, /* corr =  0.000316114 */ +0x1.4b782f807a900p-12  },  /* ppt = (133687   ,4832016  ,4833865  ) */
  { /* A = */ 9650025  , /* B = */ 314053000, /* corr = -0.000532288 */ -0x1.17127a53faeadp-11  },  /* ppt = (386001   ,12562120 ,12568049 ) */
  { /* A = */ 11040865 , /* B = */ 314007180, /* corr = -9.54285e-06 */ -0x1.403475566f07ep-17  },  /* ppt = (2208173  ,62801436 ,62840245 ) */
  { /* A = */ 12689820 , /* B = */ 313944865, /* corr =  0.00133605  */ +0x1.5e3c791c024bbp-10  },  /* ppt = (396      ,9797     ,9805     ) */
  { /* A = */ 13364215 , /* B = */ 313916880, /* corr = -0.000421978 */ -0x1.ba79d80c127ddp-12  },  /* ppt = (47       ,1104     ,1105     ) */
  { /* A = */ 14768624 , /* B = */ 313853943, /* corr =  0.000146038 */ +0x1.32434b2aa2129p-13  },  /* ppt = (30704    ,652503   ,653225   ) */
  { /* A = */ 15976415 , /* B = */ 313794780, /* corr =  8.84037e-05 */ +0x1.72cab922fddefp-14  },  /* ppt = (6643     ,130476   ,130645   ) */
  { /* A = */ 17199465 , /* B = */ 313730120, /* corr =  8.01614e-05 */ +0x1.5038a39aad420p-14  },  /* ppt = (118617   ,2163656  ,2166905  ) */
  { /* A = */ 18603000 , /* B = */ 313650025, /* corr =  0.000648177 */ +0x1.53d4d344076bdp-11  },  /* ppt = (1080     ,18209    ,18241    ) */
  { /* A = */ 19701304 , /* B = */ 313582953, /* corr =  0.000243984 */ +0x1.ffabef1187f29p-13  },  /* ppt = (19701304 ,313582953,314201225) */
  { /* A = */ 20798584 , /* B = */ 313512087, /* corr = -0.000162704 */ -0x1.5537348659f87p-13  },  /* ppt = (20798584 ,313512087,314201225) */
  { /* A = */ 22325985 , /* B = */ 313407020, /* corr =  0.000803757 */ +0x1.a56677e409ac9p-11  },  /* ppt = (2277     ,31964    ,32045    ) */
  { /* A = */ 23532000 , /* B = */ 313318775, /* corr =  0.000746123 */ +0x1.872efc3dc0e3dp-11  },  /* ppt = (480      ,6391     ,6409     ) */
  { /* A = */ 24242412 , /* B = */ 313264609, /* corr = -0.000892554 */ -0x1.d3f48e36d2f16p-11  },  /* ppt = (457404   ,5910653  ,5928325  ) */
  { /* A = */ 25869512 , /* B = */ 313134441, /* corr =  0.000396275 */ +0x1.9f86586725e08p-12  },  /* ppt = (776      ,9393     ,9425     ) */
  { /* A = */ 27270295 , /* B = */ 313015560, /* corr =  0.000964291 */ +0x1.f990eb0444b3cp-11  },  /* ppt = (23       ,264      ,265      ) */
  { /* A = */ 28193568 , /* B = */ 312933751, /* corr =  8.03151e-06 */ +0x1.0d7e1dde97395p-17  },  /* ppt = (74784    ,830063   ,833425   ) */
  { /* A = */ 29342625 , /* B = */ 312828100, /* corr = -0.000225717 */ -0x1.d95cd1a45d7bcp-13  },  /* ppt = (90285    ,962548   ,966773   ) */
  { /* A = */ 30546360 , /* B = */ 312712855, /* corr = -0.000283351 */ -0x1.291d601ec04f7p-12  },  /* ppt = (469944   ,4810967  ,4833865  ) */
  { /* A = */ 31926935 , /* B = */ 312574920, /* corr =  0.000226199 */ +0x1.da5f9cf7f8b39p-13  },  /* ppt = (7087     ,69384    ,69745    ) */
  { /* A = */ 33568080 , /* B = */ 312402935, /* corr =  0.00157179  */ +0x1.9c08d5a5ae403p-10  },  /* ppt = (336      ,3127     ,3145     ) */
  { /* A = */ 34257375 , /* B = */ 312328100, /* corr = -0.00012777  */ -0x1.0bf42dbd779bcp-13  },  /* ppt = (37035    ,337652   ,339677   ) */
  { /* A = */ 35474569 , /* B = */ 312192192, /* corr = -0.000136013 */ -0x1.1d3d38819fea4p-13  },  /* ppt = (94097    ,828096   ,833425   ) */
  { /* A = */ 36837385 , /* B = */ 312034320, /* corr =  0.000324145 */ +0x1.53e4206f6f49cp-12  },  /* ppt = (17       ,144      ,145      ) */
  { /* A = */ 38071649 , /* B = */ 311886132, /* corr =  0.000374369 */ +0x1.888dea1402007p-12  },  /* ppt = (718333   ,5884644  ,5928325  ) */
  { /* A = */ 39414879 , /* B = */ 311719228, /* corr =  0.000776061 */ +0x1.96e12bdecd30bp-11  },  /* ppt = (1065267  ,8424844  ,8491925  ) */
  { /* A = */ 40435252 , /* B = */ 311588511, /* corr =  0.000143867 */ +0x1.2db5e32534371p-13  },  /* ppt = (3110404  ,23968347 ,24169325 ) */
  { /* A = */ 41496567 , /* B = */ 311448944, /* corr = -0.000355481 */ -0x1.74bf981676e62p-12  },  /* ppt = (41496567 ,311448944,314201225) */
  { /* A = */ 42464265 , /* B = */ 311318480, /* corr = -0.001154    */ -0x1.2e83838e50948p-10  },  /* ppt = (292857   ,2147024  ,2166905  ) */
  { /* A = */ 43819625 , /* B = */ 311130600, /* corr = -0.000705329 */ -0x1.71cb9c156966ap-11  },  /* ppt = (103105   ,732072   ,739297   ) */
  { /* A = */ 45049728 , /* B = */ 310954871, /* corr = -0.000656812 */ -0x1.585bd5237b086p-11  },  /* ppt = (2649984  ,18291463 ,18482425 ) */
  { /* A = */ 46403480 , /* B = */ 310755735, /* corr = -0.000208143 */ -0x1.b481a8710d17bp-13  },  /* ppt = (320024   ,2143143  ,2166905  ) */
  { /* A = */ 47779356 , /* B = */ 310547167, /* corr =  0.000314603 */ +0x1.49e27cc4bbd18p-12  },  /* ppt = (1647564  ,10708523 ,10834525 ) */
  { /* A = */ 48739376 , /* B = */ 310397943, /* corr = -0.000499525 */ -0x1.05e512a31dca8p-11  },  /* ppt = (48739376 ,310397943,314201225) */
  { /* A = */ 50076096 , /* B = */ 310185097, /* corr = -9.78325e-05 */ -0x1.9a56de728cd01p-14  },  /* ppt = (25536    ,158177   ,160225   ) */
  { /* A = */ 51302940 , /* B = */ 309984545, /* corr = -4.76089e-05 */ -0x1.8f5f6fc083eb1p-15  },  /* ppt = (876      ,5293     ,5365     ) */
  { /* A = */ 52671265 , /* B = */ 309754980, /* corr =  0.000461941 */ +0x1.e46140a2ac2bdp-12  },  /* ppt = (10534253 ,61950996 ,62840245 ) */
  { /* A = */ 53651745 , /* B = */ 309586660, /* corr = -0.000278111 */ -0x1.239ee67978624p-12  },  /* ppt = (631197   ,3642196  ,3696485  ) */
  { /* A = */ 54999457 , /* B = */ 309350076, /* corr =  0.000170558 */ +0x1.65afdf29ee454p-13  },  /* ppt = (1896533  ,10667244 ,10834525 ) */
  { /* A = */ 56630824 , /* B = */ 309055593, /* corr =  0.00154034  */ +0x1.93ca5126386a2p-10  },  /* ppt = (56630824 ,309055593,314201225) */
  { /* A = */ 57411735 , /* B = */ 308911480, /* corr =  0.000161441 */ +0x1.52910c58849b2p-13  },  /* ppt = (395943   ,2130424  ,2166905  ) */
  { /* A = */ 58756471 , /* B = */ 308658528, /* corr =  0.000610111 */ +0x1.3fdfae1d58e94p-11  },  /* ppt = (3456263  ,18156384 ,18482425 ) */
  { /* A = */ 59456225 , /* B = */ 308524500, /* corr = -0.00102857  */ -0x1.0da1ee2b9d75fp-10  },  /* ppt = (3781     ,19620    ,19981    ) */
  { /* A = */ 61095008 , /* B = */ 308204169, /* corr =  0.000379609 */ +0x1.8e0c63b949ed9p-12  },  /* ppt = (5216     ,26313    ,26825    ) */
  { /* A = */ 62144673 , /* B = */ 307994236, /* corr = -0.000119739 */ -0x1.f63897bf1c506p-14  },  /* ppt = (68973    ,341836   ,348725   ) */
  { /* A = */ 63640020 , /* B = */ 307688735, /* corr =  0.000831524 */ +0x1.b3f54d83ba82ap-11  },  /* ppt = (12728004 ,61537747 ,62840245 ) */
  { /* A = */ 64478076 , /* B = */ 307514207, /* corr = -0.000350241 */ -0x1.6f411e712ef90p-12  },  /* ppt = (291756   ,1391467  ,1421725  ) */
  { /* A = */ 65816660 , /* B = */ 307230495, /* corr =  9.84286e-05 */ +0x1.9cd6de75022fap-14  },  /* ppt = (34916    ,162987   ,166685   ) */
  { /* A = */ 66592929 , /* B = */ 307063172, /* corr = -0.00128047  */ -0x1.4faac1b3d7b3cp-10  },  /* ppt = (5122533  ,23620244 ,24169325 ) */
  { /* A = */ 68353464 , /* B = */ 306676073, /* corr =  0.000550344 */ +0x1.2089f775b5d1cp-11  },  /* ppt = (2616     ,11737    ,12025    ) */
  { /* A = */ 68889975 , /* B = */ 306556000, /* corr = -0.00160612  */ -0x1.a509367ea335dp-10  },  /* ppt = (2755599  ,12262240 ,12568049 ) */
  { /* A = */ 70499000 , /* B = */ 306189975, /* corr = -0.000260537 */ -0x1.113151dfd0304p-12  },  /* ppt = (440      ,1911     ,1961     ) */
  { /* A = */ 71831760 , /* B = */ 305880055, /* corr =  0.000188133 */ +0x1.8a8b085d3ea95p-13  },  /* ppt = (1105104  ,4705847  ,4833865  ) */
  { /* A = */ 73199625 , /* B = */ 305555600, /* corr =  0.000756148 */ +0x1.8c7080e8016dep-11  },  /* ppt = (1905     ,7952     ,8177     ) */
  { /* A = */ 74148855 , /* B = */ 305326640, /* corr = -4.23694e-05 */ -0x1.636ba2964481fp-15  },  /* ppt = (279807   ,1152176  ,1185665  ) */
  { /* A = */ 75323388 , /* B = */ 305039009, /* corr = -0.000100003 */ -0x1.a371ae7d68872p-14  },  /* ppt = (1421196  ,5755453  ,5928325  ) */
  { /* A = */ 76687455 , /* B = */ 304698940, /* corr =  0.000468012 */ +0x1.eabf120209655p-12  },  /* ppt = (40683    ,161644   ,166685   ) */
  { /* A = */ 78013663 , /* B = */ 304362084, /* corr =  0.000916682 */ +0x1.e09af4083c751p-11  },  /* ppt = (353003   ,1377204  ,1421725  ) */
  { /* A = */ 78703625 , /* B = */ 304184400, /* corr = -0.000721995 */ -0x1.7a88966c57601p-11  },  /* ppt = (385      ,1488     ,1537     ) */
  { /* A = */ 80526345 , /* B = */ 303706960, /* corr =  0.0013686   */ +0x1.66c507d7a9007p-10  },  /* ppt = (303873   ,1146064  ,1185665  ) */
  { /* A = */ 81214815 , /* B = */ 303523580, /* corr = -0.00027008  */ -0x1.1b32f58a83a88p-12  },  /* ppt = (8283     ,30956    ,32045    ) */
  { /* A = */ 82516887 , /* B = */ 303172184, /* corr =  0.000116003 */ +0x1.e68d30dba2f7cp-14  },  /* ppt = (82516887 ,303172184,314201225) */
  { /* A = */ 83476375 , /* B = */ 302909400, /* corr = -0.000624049 */ -0x1.472e6d729de81p-11  },  /* ppt = (196415   ,712728   ,739297   ) */
  { /* A = */ 84813144 , /* B = */ 302537833, /* corr = -0.000114499 */ -0x1.e03eb129fc9bdp-14  },  /* ppt = (123096   ,439097   ,456025   ) */
  { /* A = */ 86009460 , /* B = */ 302199905, /* corr = -6.42757e-05 */ -0x1.0d978a97b1c14p-14  },  /* ppt = (516      ,1813     ,1885     ) */
  { /* A = */ 87328164 , /* B = */ 301821473, /* corr =  0.000395882 */ +0x1.9f1cda0a52ce9p-12  },  /* ppt = (3011316  ,10407637 ,10834525 ) */
  { /* A = */ 88504000 , /* B = */ 301478775, /* corr =  0.00038764  */ +0x1.967854a83ea75p-12  },  /* ppt = (7360     ,25071    ,26129    ) */
  { /* A = */ 89578100 , /* B = */ 301161375, /* corr =  4.60343e-05 */ +0x1.8229cfafb73c0p-15  },  /* ppt = (7268     ,24435    ,25493    ) */
  { /* A = */ 90888780 , /* B = */ 300768415, /* corr =  0.000494704 */ +0x1.035e080233363p-11  },  /* ppt = (18177756 ,60153683 ,62840245 ) */
  { /* A = */ 92077535 , /* B = */ 300406620, /* corr =  0.00054322  */ +0x1.1ccdcef421947p-11  },  /* ppt = (18415507 ,60081324 ,62840245 ) */
  { /* A = */ 93233000 , /* B = */ 300050025, /* corr =  0.000485587 */ +0x1.fd2ca69bb1975p-12  },  /* ppt = (3729320  ,12002001 ,12568049 ) */
  { /* A = */ 94334303 , /* B = */ 299705604, /* corr =  0.000251838 */ +0x1.08124cda8e1fbp-12  },  /* ppt = (3252907  ,10334676 ,10834525 ) */
  { /* A = */ 95469552 , /* B = */ 299345911, /* corr =  0.000135738 */ +0x1.1caa0d0eab608p-13  },  /* ppt = (5615856  ,17608583 ,18482425 ) */
  { /* A = */ 96807945 , /* B = */ 298915760, /* corr =  0.000703754 */ +0x1.70f842145c9bbp-11  },  /* ppt = (57       ,176      ,185      ) */
  { /* A = */ 97467324 , /* B = */ 298701407, /* corr = -0.000995803 */ -0x1.050b3a532ee5dp-10  },  /* ppt = (154956   ,474883   ,499525   ) */
  { /* A = */ 98785375 , /* B = */ 298268100, /* corr = -0.000486254 */ -0x1.fddfbab1feee2p-12  },  /* ppt = (155      ,468      ,493      ) */
  { /* A = */ 99932560 , /* B = */ 297885705, /* corr = -0.000543888 */ -0x1.1d2758ff483fdp-11  },  /* ppt = (784      ,2337     ,2465     ) */
  { /* A = */ 101264375, /* B = */ 297435600, /* corr =  2.41279e-05 */ +0x1.94ccba2d3076fp-16  },  /* ppt = (3775     ,11088    ,11713    ) */
  { /* A = */ 102423009, /* B = */ 297038612, /* corr =  1.58857e-05 */ +0x1.0a84640bee031p-16  },  /* ppt = (7878693  ,22849124 ,24169325 ) */
  { /* A = */ 103481193, /* B = */ 296671624, /* corr = -0.00032572  */ -0x1.558ad47188dfap-12  },  /* ppt = (5673     ,16264    ,17225    ) */
  { /* A = */ 104355920, /* B = */ 296365065, /* corr = -0.00128198  */ -0x1.50102e62c7636p-10  },  /* ppt = (719696   ,2043897  ,2166905  ) */
  { /* A = */ 105910935, /* B = */ 295812920, /* corr =  6.36086e-05 */ +0x1.0acb3a3e7c662p-14  },  /* ppt = (95847    ,267704   ,284345   ) */
  { /* A = */ 107080479, /* B = */ 295391572, /* corr =  0.000113832 */ +0x1.dd7260d0c740bp-14  },  /* ppt = (2894067  ,7983556  ,8491925  ) */
  { /* A = */ 108518560, /* B = */ 294866295, /* corr =  0.00108029  */ +0x1.1b31488fdc896p-10  },  /* ppt = (409504   ,1112703  ,1185665  ) */
  { /* A = */ 109434400, /* B = */ 294527625, /* corr =  0.000281776 */ +0x1.2776ac1ca6b98p-12  },  /* ppt = (2848     ,7665     ,8177     ) */
  { /* A = */ 110319977, /* B = */ 294197064, /* corr = -0.000616017 */ -0x1.42f874fb238b3p-11  },  /* ppt = (56257    ,150024   ,160225   ) */
  { /* A = */ 111881900, /* B = */ 293606625, /* corr =  0.000792158 */ +0x1.9f519938bc578p-11  },  /* ppt = (344252   ,903405   ,966773   ) */
  { /* A = */ 112779180, /* B = */ 293263135, /* corr = -5.62442e-05 */ -0x1.d7cf8db7bdb42p-15  },  /* ppt = (22555836 ,58652627 ,62840245 ) */
  { /* A = */ 113823840, /* B = */ 292859255, /* corr = -0.00039785  */ -0x1.a12d0c693f766p-12  },  /* ppt = (96       ,247      ,265      ) */
  { /* A = */ 114981636, /* B = */ 292406623, /* corr = -0.000347626 */ -0x1.6c8342c4acbfbp-12  },  /* ppt = (3964884  ,10082987 ,10834525 ) */
  { /* A = */ 116240236, /* B = */ 291908577, /* corr =  5.40658e-05 */ +0x1.c58957275d0a5p-15  },  /* ppt = (2044     ,5133     ,5525     ) */
  { /* A = */ 117142296, /* B = */ 291547753, /* corr = -0.000760062 */ -0x1.8e7dbb9305e2ap-11  },  /* ppt = (59736    ,148673   ,160225   ) */
  { /* A = */ 118397176, /* B = */ 291040407, /* corr = -0.000358369 */ -0x1.77c7097c73644p-12  },  /* ppt = (118397176,291040407,314201225) */
  { /* A = */ 119547740, /* B = */ 290569695, /* corr = -0.000308146 */ -0x1.431d3fd7e0adap-12  },  /* ppt = (2924     ,7107     ,7685     ) */
  { /* A = */ 120846625, /* B = */ 290031900, /* corr =  0.00025987  */ +0x1.107e3dc982d97p-12  },  /* ppt = (5        ,12       ,13       ) */
  { /* A = */ 121469400, /* B = */ 289771625, /* corr = -0.00149815  */ -0x1.88bb5faca634cp-10  },  /* ppt = (12888    ,30745    ,33337    ) */
  { /* A = */ 123007647, /* B = */ 289121996, /* corr = -8.99784e-05 */ -0x1.7965892b64368p-14  },  /* ppt = (2163     ,5084     ,5525     ) */
  { /* A = */ 124268895, /* B = */ 288582140, /* corr =  0.00037018  */ +0x1.84295a6566314p-12  },  /* ppt = (1461987  ,3395084  ,3696485  ) */
  { /* A = */ 125409687, /* B = */ 288088216, /* corr =  0.000420403 */ +0x1.b8d32409f8e7fp-12  },  /* ppt = (260727   ,598936   ,653225   ) */
  { /* A = */ 126177289, /* B = */ 287752848, /* corr = -0.000819828 */ -0x1.add3723aa8fa1p-11  },  /* ppt = (117593   ,268176   ,292825   ) */
  { /* A = */ 127314785, /* B = */ 287251380, /* corr = -0.000769604 */ -0x1.937e8d685f9ecp-11  },  /* ppt = (3973     ,8964     ,9805     ) */
  { /* A = */ 128821620, /* B = */ 286578785, /* corr =  0.000575984 */ +0x1.2dfb36a4feb4cp-11  },  /* ppt = (25764324 ,57315757 ,62840245 ) */
  { /* A = */ 129684375, /* B = */ 286189400, /* corr = -0.000317689 */ -0x1.4d1ee3829425ep-12  },  /* ppt = (3375     ,7448     ,8177     ) */
  { /* A = */ 130963560, /* B = */ 285606295, /* corr =  0.000250327 */ +0x1.067c9a1ecf613p-12  },  /* ppt = (2014824  ,4393943  ,4833865  ) */
  { /* A = */ 131798625, /* B = */ 285221900, /* corr = -0.000730124 */ -0x1.7ecb8bf1f995bp-11  },  /* ppt = (142485   ,308348   ,339677   ) */
  { /* A = */ 133073460, /* B = */ 284629345, /* corr = -0.000162108 */ -0x1.53f734851f48bp-13  },  /* ppt = (36       ,77       ,85       ) */
  { /* A = */ 134198544, /* B = */ 284100617, /* corr = -0.000111885 */ -0x1.d5474277f3b6cp-14  },  /* ppt = (5136     ,10873    ,12025    ) */
  { /* A = */ 135421184, /* B = */ 283519863, /* corr =  0.000289808 */ +0x1.2fe29d0b9b735p-12  },  /* ppt = (7424     ,15543    ,17225    ) */
  { /* A = */ 136541860, /* B = */ 282981855, /* corr =  0.000340031 */ +0x1.648c66b02e29fp-12  },  /* ppt = (72436    ,150123   ,166685   ) */
  { /* A = */ 137549720, /* B = */ 282493335, /* corr = -1.57469e-06 */ -0x1.a6b4021995e13p-20  },  /* ppt = (43736    ,89823    ,99905    ) */
  { /* A = */ 138382473, /* B = */ 282086336, /* corr = -0.000957834 */ -0x1.f62e4c8dd721dp-11  },  /* ppt = (138382473,282086336,314201225) */
  { /* A = */ 139892375, /* B = */ 281340600, /* corr =  0.000495611 */ +0x1.03d7d7f81955cp-11  },  /* ppt = (5215     ,10488    ,11713    ) */
  { /* A = */ 141137055, /* B = */ 280718260, /* corr =  0.00101836  */ +0x1.0af4c03b5d423p-10  },  /* ppt = (26307    ,52324    ,58565    ) */
  { /* A = */ 141610480, /* B = */ 280479735, /* corr = -0.0012007   */ -0x1.3ac1971161a41p-10  },  /* ppt = (976624   ,1934343  ,2166905  ) */
  { /* A = */ 142993001, /* B = */ 279777432, /* corr = -0.000171651 */ -0x1.67fa7bda86392p-13  },  /* ppt = (8411353  ,16457496 ,18482425 ) */
  { /* A = */ 144315873, /* B = */ 279097364, /* corr =  0.000656145 */ +0x1.58024b18545d0p-11  },  /* ppt = (333      ,644      ,725      ) */
  { /* A = */ 144948375, /* B = */ 278769400, /* corr = -0.000982532 */ -0x1.01909fae1fbc1p-10  },  /* ppt = (495      ,952      ,1073     ) */
  { /* A = */ 146383967, /* B = */ 278018244, /* corr =  0.000267901 */ +0x1.18ea2eb877934p-12  },  /* ppt = (5047723  ,9586836  ,10834525 ) */
  { /* A = */ 147404000, /* B = */ 277478775, /* corr =  3.41528e-05 */ +0x1.1e7ea7baa0dccp-15  },  /* ppt = (5896160  ,11099151 ,12568049 ) */
  { /* A = */ 148470815, /* B = */ 276909420, /* corr = -2.3481e-05  */ -0x1.89f22553d75f2p-16  },  /* ppt = (29694163 ,55381884 ,62840245 ) */
  { /* A = */ 149692140, /* B = */ 276251105, /* corr =  0.000486069 */ +0x1.fdae0c457f334p-12  },  /* ppt = (2556     ,4717     ,5365     ) */
  { /* A = */ 151140895, /* B = */ 275461140, /* corr =  0.00183166  */ +0x1.e02865180ef69p-10  },  /* ppt = (19667    ,35844    ,40885    ) */
  { /* A = */ 151622660, /* B = */ 275196255, /* corr = -0.000324813 */ -0x1.54973485bca09p-12  },  /* ppt = (1783796  ,3237603  ,3696485  ) */
  { /* A = */ 152819676, /* B = */ 274533343, /* corr =  0.000123857 */ +0x1.03bf431165c8bp-13  },  /* ppt = (5269644  ,9466667  ,10834525 ) */
  { /* A = */ 154016940, /* B = */ 273863455, /* corr =  0.000584015 */ +0x1.32312f1c7911ap-11  },  /* ppt = (924      ,1643     ,1885     ) */
  { /* A = */ 154604905, /* B = */ 273531960, /* corr = -0.00117401  */ -0x1.33c25790ca625p-10  },  /* ppt = (2378537  ,4208184  ,4833865  ) */
  { /* A = */ 156056380, /* B = */ 272706465, /* corr =  0.000234167 */ +0x1.eb157c492c785p-13  },  /* ppt = (15916    ,27813    ,32045    ) */
  { /* A = */ 157166583, /* B = */ 272068144, /* corr =  0.000403736 */ +0x1.a7592f5c1cf50p-12  },  /* ppt = (157166583,272068144,314201225) */
  { /* A = */ 158334057, /* B = */ 271390376, /* corr =  0.00079394  */ +0x1.a040db31f2ce0p-11  },  /* ppt = (158334057,271390376,314201225) */
  { /* A = */ 158935660, /* B = */ 271038495, /* corr = -0.000894129 */ -0x1.d4c7e837dfbc5p-11  },  /* ppt = (84316    ,143787   ,166685   ) */
  { /* A = */ 160114500, /* B = */ 270343775, /* corr = -0.000445459 */ -0x1.d318fa614ff3cp-12  },  /* ppt = (28980    ,48931    ,56869    ) */
  { /* A = */ 161306719, /* B = */ 269634108, /* corr =  6.40907e-05 */ +0x1.0cd0d0e5b2d5dp-14  },  /* ppt = (3043523  ,5087436  ,5928325  ) */
  { /* A = */ 162343240, /* B = */ 269011305, /* corr =  6.45681e-06 */ +0x1.b14f3b36c8fa5p-18  },  /* ppt = (612616   ,1015137  ,1185665  ) */
  { /* A = */ 163545239, /* B = */ 268282248, /* corr =  0.000574472 */ +0x1.2d305d471f558p-11  },  /* ppt = (433807   ,711624   ,833425   ) */
  { /* A = */ 164222760, /* B = */ 267868055, /* corr = -0.000804424 */ -0x1.a5c001ef3057fp-11  },  /* ppt = (2526504  ,4121047  ,4833865  ) */
  { /* A = */ 165526049, /* B = */ 267064668, /* corr =  0.000162037 */ +0x1.53d10c59bf4aep-13  },  /* ppt = (6493     ,10476    ,12325    ) */
  { /* A = */ 166581385, /* B = */ 266407680, /* corr =  0.000212261 */ +0x1.bd249fa2e4b83p-13  },  /* ppt = (36977    ,59136    ,69745    ) */
  { /* A = */ 167408503, /* B = */ 265888704, /* corr = -0.000586257 */ -0x1.335e1328ac87fp-11  },  /* ppt = (6407     ,10176    ,12025    ) */
  { /* A = */ 168596480, /* B = */ 265137015, /* corr = -1.82415e-05 */ -0x1.320a8aff588cfp-16  },  /* ppt = (152576   ,239943   ,284345   ) */
  { /* A = */ 169749528, /* B = */ 264400279, /* corr =  0.000430428 */ +0x1.c3562d5e79fc1p-12  },  /* ppt = (450264   ,701327   ,833425   ) */
  { /* A = */ 170781900, /* B = */ 263734625, /* corr =  0.000433674 */ +0x1.c6bd8e9e358edp-12  },  /* ppt = (128892   ,199045   ,237133   ) */
  { /* A = */ 171912360, /* B = */ 262999145, /* corr =  0.000819757 */ +0x1.adc9e82fd0faap-11  },  /* ppt = (929256   ,1421617  ,1698385  ) */
  { /* A = */ 173075492, /* B = */ 262235169, /* corr =  0.0013425   */ +0x1.5fedc8573914ap-10  },  /* ppt = (4677716  ,7087437  ,8491925  ) */
  { /* A = */ 173517687, /* B = */ 261942784, /* corr = -0.000876554 */ -0x1.cb911deb0ba35p-11  },  /* ppt = (173517687,261942784,314201225) */
  { /* A = */ 174935457, /* B = */ 260998076, /* corr =  0.000639478 */ +0x1.4f4550c166638p-11  },  /* ppt = (194157   ,289676   ,348725   ) */
  { /* A = */ 175495736, /* B = */ 260621673, /* corr = -0.00111854  */ -0x1.253846be53b96p-10  },  /* ppt = (364856   ,541833   ,653225   ) */
  { /* A = */ 176632040, /* B = */ 259852905, /* corr = -0.000658387 */ -0x1.592f2f2487d35p-11  },  /* ppt = (104      ,153      ,185      ) */
  { /* A = */ 177792919, /* B = */ 259060008, /* corr = -9.03714e-05 */ -0x1.7b0b829eb07e1p-14  },  /* ppt = (10458407 ,15238824 ,18482425 ) */
  { /* A = */ 178773516, /* B = */ 258384287, /* corr = -0.000206471 */ -0x1.b1004df5c91dep-13  },  /* ppt = (6164604  ,8909803  ,10834525 ) */
  { /* A = */ 179897060, /* B = */ 257603295, /* corr =  0.000242199 */ +0x1.fbed5e2715ebep-13  },  /* ppt = (2116436  ,3030627  ,3696485  ) */
  { /* A = */ 180711780, /* B = */ 257032415, /* corr = -0.000497853 */ -0x1.0504bc044ccc1p-11  },  /* ppt = (36142356 ,51406483 ,62840245 ) */
  { /* A = */ 181496900, /* B = */ 256478625, /* corr = -0.00134626  */ -0x1.60e9a70c427f7p-10  },  /* ppt = (558452   ,789165   ,966773   ) */
  { /* A = */ 182841375, /* B = */ 255521900, /* corr = -6.67119e-07 */ -0x1.66282c9aad8b0p-21  },  /* ppt = (14835    ,20732    ,25493    ) */
  { /* A = */ 183952415, /* B = */ 254723220, /* corr =  0.000448003 */ +0x1.d5c3c1f8222e2p-12  },  /* ppt = (36790483 ,50944644 ,62840245 ) */
  { /* A = */ 184743137, /* B = */ 254150316, /* corr = -0.000350515 */ -0x1.6f8ab42aa93dep-12  },  /* ppt = (6370453  ,8763804  ,10834525 ) */
  { /* A = */ 185878420, /* B = */ 253321185, /* corr =  0.0002175   */ +0x1.c82192ed74927p-13  },  /* ppt = (53956    ,73533    ,91205    ) */
  { /* A = */ 186851977, /* B = */ 252603936, /* corr =  0.000159866 */ +0x1.4f43a454516f6p-13  },  /* ppt = (271193   ,366624   ,456025   ) */
  { /* A = */ 187965600, /* B = */ 251776375, /* corr =  0.000669416 */ +0x1.5ef7806272b07p-11  },  /* ppt = (442272   ,592415   ,739297   ) */
  { /* A = */ 188520735, /* B = */ 251360980, /* corr = -0.00103014  */ -0x1.0e0b9b2c23db7p-10  },  /* ppt = (3        ,4        ,5        ) */
  { /* A = */ 189643500, /* B = */ 250514975, /* corr = -0.000462126 */ -0x1.e492ef0f2be6bp-12  },  /* ppt = (12060    ,15931    ,19981    ) */
  { /* A = */ 190591625, /* B = */ 249794400, /* corr = -0.000578225 */ -0x1.2f281ab1322b1p-11  },  /* ppt = (7105     ,9312     ,11713    ) */
  { /* A = */ 191707360, /* B = */ 248939145, /* corr = -1.021e-05   */ -0x1.5696f82019e09p-17  },  /* ppt = (1504     ,1953     ,2465     ) */
  { /* A = */ 193027615, /* B = */ 247916820, /* corr =  0.00139797  */ +0x1.6e77d929afbdap-10  },  /* ppt = (38605523 ,49583364 ,62840245 ) */
  { /* A = */ 193544260, /* B = */ 247513695, /* corr = -0.000422645 */ -0x1.bb2cec225fd49p-12  },  /* ppt = (102676   ,131307   ,166685   ) */
  { /* A = */ 194649761, /* B = */ 246645252, /* corr =  0.00014537  */ +0x1.30dd22fe07650p-13  },  /* ppt = (3672637  ,4653684  ,5928325  ) */
  { /* A = */ 195597560, /* B = */ 245894295, /* corr =  8.77366e-05 */ +0x1.6ffe68c9c883ep-14  },  /* ppt = (738104   ,927903   ,1185665  ) */
  { /* A = */ 196151820, /* B = */ 245452385, /* corr = -0.00156243  */ -0x1.9994d8562150dp-10  },  /* ppt = (39230364 ,49090477 ,62840245 ) */
  { /* A = */ 197427120, /* B = */ 244427785, /* corr = -0.000262112 */ -0x1.12d805e1e9c62p-12  },  /* ppt = (43824    ,54257    ,69745    ) */
  { /* A = */ 198518775, /* B = */ 243542000, /* corr =  0.000305904 */ +0x1.40c377bf79c0fp-12  },  /* ppt = (1239     ,1520     ,1961     ) */
  { /* A = */ 199466593, /* B = */ 242766324, /* corr =  0.000297662 */ +0x1.381ef25d6599cp-12  },  /* ppt = (317117   ,385956   ,499525   ) */
  { /* A = */ 200524705, /* B = */ 241893060, /* corr =  0.00075782  */ +0x1.8d50d786d26c5p-11  },  /* ppt = (26093    ,31476    ,40885    ) */
  { /* A = */ 201084041, /* B = */ 241428288, /* corr = -0.00083388  */ -0x1.b5317ebb55d6fp-11  },  /* ppt = (11828473 ,14201664 ,18482425 ) */
  { /* A = */ 202122231, /* B = */ 240559792, /* corr = -0.000432188 */ -0x1.c52e8fcd134cdp-12  },  /* ppt = (6063     ,7216     ,9425     ) */
  { /* A = */ 203072415, /* B = */ 239758220, /* corr = -0.000381964 */ -0x1.9084c62880963p-12  },  /* ppt = (58947    ,69596    ,91205    ) */
  { /* A = */ 203910815, /* B = */ 239045580, /* corr = -0.000786157 */ -0x1.9c2c3a93e5ba4p-11  },  /* ppt = (40782163 ,47809116 ,62840245 ) */
  { /* A = */ 204841065, /* B = */ 238248920, /* corr = -0.000794399 */ -0x1.a07e7d44efcdep-11  },  /* ppt = (2937     ,3416     ,4505     ) */
  { /* A = */ 205905000, /* B = */ 237330025, /* corr = -0.000226384 */ -0x1.dac2f9d0f8294p-13  },  /* ppt = (4200     ,4841     ,6409     ) */
  { /* A = */ 206816865, /* B = */ 236535820, /* corr = -0.000284018 */ -0x1.29d074350da63p-12  },  /* ppt = (21093    ,24124    ,32045    ) */
  { /* A = */ 207859340, /* B = */ 235620255, /* corr =  0.000225532 */ +0x1.d8f974cb5e060p-13  },  /* ppt = (5084     ,5763     ,7685     ) */
  { /* A = */ 208697920, /* B = */ 234877815, /* corr = -0.000116074 */ -0x1.e6d9813262f35p-14  },  /* ppt = (1439296  ,1619847  ,2166905  ) */
  { /* A = */ 209625572, /* B = */ 234050271, /* corr = -6.58504e-05 */ -0x1.14325aa01818cp-14  },  /* ppt = (884      ,987      ,1325     ) */
  { /* A = */ 210315105, /* B = */ 233430860, /* corr = -0.00102211  */ -0x1.0bf09ef066ad0p-10  },  /* ppt = (111573   ,123836   ,166685   ) */
  { /* A = */ 211538140, /* B = */ 232323105, /* corr =  0.000323478 */ +0x1.53310c5921f30p-12  },  /* ppt = (2488684  ,2733213  ,3696485  ) */
  { /* A = */ 212589975, /* B = */ 231361000, /* corr =  0.000954081 */ +0x1.f4368f23c44c4p-11  },  /* ppt = (17679    ,19240    ,26129    ) */
  { /* A = */ 213265980, /* B = */ 230738015, /* corr = -2.63698e-05 */ -0x1.ba693bb39f415p-16  },  /* ppt = (42653196 ,46147603 ,62840245 ) */
  { /* A = */ 214296225, /* B = */ 229781500, /* corr =  0.000541646 */ +0x1.1bfa74f314c98p-11  },  /* ppt = (429      ,460      ,629      ) */
  { /* A = */ 215322180, /* B = */ 228820385, /* corr =  0.00110966  */ +0x1.22e419e1e3468p-10  },  /* ppt = (43064436 ,45764077 ,62840245 ) */
  { /* A = */ 216187895, /* B = */ 228002640, /* corr =  0.000993561 */ +0x1.0474c84d152abp-10  },  /* ppt = (87703    ,92496    ,127465   ) */
  { /* A = */ 216715039, /* B = */ 227501652, /* corr = -0.000598138 */ -0x1.3998c5a7fdedep-11  },  /* ppt = (4088963  ,4292484  ,5928325  ) */
  { /* A = */ 217706335, /* B = */ 226553220, /* corr = -0.00013798  */ -0x1.215d9d3f7939dp-13  },  /* ppt = (2387     ,2484     ,3445     ) */
  { /* A = */ 218587785, /* B = */ 225702880, /* corr = -0.000146223 */ -0x1.32a6a803a1884p-13  },  /* ppt = (197817   ,204256   ,284345   ) */
  { /* A = */ 219571209, /* B = */ 224746288, /* corr =  0.000313935 */ +0x1.492f68ae6e7acp-12  },  /* ppt = (297      ,304      ,425      ) */
  { /* A = */ 220066620, /* B = */ 224261215, /* corr = -0.00138562  */ -0x1.6b3b8131c194fp-10  },  /* ppt = (44013324 ,44852243 ,62840245 ) */
  { /* A = */ 221228319, /* B = */ 223115308, /* corr = -9.84996e-05 */ -0x1.9d232ecbc22b3p-14  },  /* ppt = (17017563 ,17162716 ,24169325 ) */
  { /* A = */ 222109335, /* B = */ 222238280, /* corr = -4.82761e-05 */ -0x1.94f81072eea13p-15  },  /* ppt = (70623    ,70664    ,99905    ) */
};