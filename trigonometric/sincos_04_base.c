// Pythagorean-triple-based table generation
//   for trigonometric function evaluation
//
// [Fri Nov  4 14:58:38 2016]
//
// Table generated for the following parameters
//     --index-size=4
//     --addressing=base
//     --algorithm=heuristic

static const double lcm = 10625;
static const double cos_sin[13][3] =
{
  { /* A = */ 0   , /* B = */ 10625, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0   ,1    ,1    ) */
  { /* A = */ 824 , /* B = */ 10593, /* corr =  0.0151309   */ +0x1.efcf1f7fe1b76p-7   },  /* ppt = (824 ,10593,10625) */
  { /* A = */ 1380, /* B = */ 10535, /* corr =  0.00525033  */ +0x1.5815dd55efde8p-8   },  /* ppt = (276 ,2107 ,2125 ) */
  { /* A = */ 2175, /* B = */ 10400, /* corr =  0.0186632   */ +0x1.31c734b64800ep-6   },  /* ppt = (87  ,416  ,425  ) */
  { /* A = */ 2975, /* B = */ 10200, /* corr =  0.0337941   */ +0x1.14d7623b1c6e4p-5   },  /* ppt = (7   ,24   ,25   ) */
  { /* A = */ 3740, /* B = */ 9945 , /* corr =  0.047207    */ +0x1.82b840eb8272ep-5   },  /* ppt = (44  ,117  ,125  ) */
  { /* A = */ 4500, /* B = */ 9625 , /* corr =  0.0623379   */ +0x1.feac08cb7ae0bp-5   },  /* ppt = (36  ,77   ,85   ) */
  { /* A = */ 5000, /* B = */ 9375 , /* corr =  0.0524573   */ +0x1.adbafc96406ebp-5   },  /* ppt = (8   ,15   ,17   ) */
  { /* A = */ 5217, /* B = */ 9256 , /* corr =  0.0132508   */ +0x1.b2339def83955p-7   },  /* ppt = (5217,9256 ,10625) */
  { /* A = */ 5712, /* B = */ 8959 , /* corr =  0.00508822  */ +0x1.4d7623b1c6e44p-8   },  /* ppt = (336 ,527  ,625  ) */
  { /* A = */ 6375, /* B = */ 8500 , /* corr =  0.0185011   */ +0x1.2f1f464d3dc25p-6   },  /* ppt = (3   ,4    ,5    ) */
  { /* A = */ 7015, /* B = */ 7980 , /* corr =  0.033632    */ +0x1.13836b06974f0p-5   },  /* ppt = (1403,1596 ,2125 ) */
  { /* A = */ 7425, /* B = */ 7600 , /* corr =  0.0237514   */ +0x1.8524bda2b9b9fp-6   },  /* ppt = (297 ,304  ,425  ) */
};
