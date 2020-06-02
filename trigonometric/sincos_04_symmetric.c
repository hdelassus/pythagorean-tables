// Pythagorean-triple-based table generation
//   for trigonometric function evaluation
//
// [Fri Nov  4 12:10:39 2016]
//
// Table generated for the following parameters
//     --index-size=4
//     --addressing=symmetric
//     --algorithm=heuristic

static const double lcm = 5525;
static const double cos_sin[14][3] =
{
  { /* A = */ 0   , /* B = */ 5525, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0   ,1   ,1   ) */
  { /* A = */ 235 , /* B = */ 5520, /* corr = -0.0199532   */ -0x1.46e9e7603049fp-6   },  /* ppt = (47  ,1104,1105) */
  { /* A = */ 612 , /* B = */ 5491, /* corr = -0.014003    */ -0x1.cad996fe25a24p-7   },  /* ppt = (36  ,323 ,325 ) */
  { /* A = */ 1036, /* B = */ 5427, /* corr =  0.0011279   */ +0x1.27ac440de0a8cp-10  },  /* ppt = (1036,5427,5525) */
  { /* A = */ 1360, /* B = */ 5355, /* corr = -0.00129001  */ -0x1.522b2a9e8491dp-10  },  /* ppt = (16  ,63  ,65  ) */
  { /* A = */ 1547, /* B = */ 5304, /* corr = -0.0287059   */ -0x1.d6513b89c7237p-6   },  /* ppt = (7   ,24  ,25  ) */
  { /* A = */ 2044, /* B = */ 5133, /* corr =  0.00396032  */ +0x1.038b12ae4eba1p-8   },  /* ppt = (2044,5133,5525) */
  { /* A = */ 2340, /* B = */ 5005, /* corr = -0.000162108 */ -0x1.53f734851f48bp-13  },  /* ppt = (36  ,77  ,85  ) */
  { /* A = */ 2600, /* B = */ 4875, /* corr = -0.0100427   */ -0x1.49140da6fe454p-7   },  /* ppt = (8   ,15  ,17  ) */
  { /* A = */ 2880, /* B = */ 4715, /* corr = -0.0141651   */ -0x1.d02973d03a1f6p-7   },  /* ppt = (576 ,943 ,1105) */
  { /* A = */ 3315, /* B = */ 4420, /* corr =  0.0185011   */ +0x1.2f1f464d3dc25p-6   },  /* ppt = (3   ,4   ,5   ) */
  { /* A = */ 3500, /* B = */ 4275, /* corr = -0.00145212  */ -0x1.7caa112f287aep-10  },  /* ppt = (140 ,171 ,221 ) */
  { /* A = */ 3720, /* B = */ 4085, /* corr = -0.0113327   */ -0x1.735972faced77p-7   },  /* ppt = (744 ,817 ,1105) */
  { /* A = */ 3952, /* B = */ 3861, /* corr = -0.0154551   */ -0x1.fa6ed9240ab1ap-7   },  /* ppt = (304 ,297 ,425 ) */
};
