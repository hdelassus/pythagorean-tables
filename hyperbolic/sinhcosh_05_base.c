// Pythagorean-triple-based table generation
//   for hyperbolic function evaluation
//
// [Fri Nov  4 15:50:58 2016]
//
// Table generated for the following parameters
//     --index-size=5
//     --addressing=base
//     --algorithm=heuristic

static const double lcm = 5040;
static const double PPTTABLE[12][3] =
{
  { /* A = */ 0   , /* C = */ 5040, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0   , 1   , 1   ) */
  { /* A = */ 246 , /* C = */ 5046, /* corr =  0.0175402   */ +0x1.1f60c7de58fd3p-6   },  /* ppt = (41  , 840 , 841 ) */
  { /* A = */ 348 , /* C = */ 5052, /* corr =  0.00649287  */ +0x1.a9844eb18ef13p-8   },  /* ppt = (29  , 420 , 421 ) */
  { /* A = */ 532 , /* C = */ 5068, /* corr =  0.0116105   */ +0x1.7c74108520aebp-7   },  /* ppt = (19  , 180 , 181 ) */
  { /* A = */ 675 , /* C = */ 5085, /* corr =  0.00853139  */ +0x1.178e8227e47bep-7   },  /* ppt = (15  , 112 , 113 ) */
  { /* A = */ 924 , /* C = */ 5124, /* corr =  0.0260716   */ +0x1.ab2808f24b3b2p-6   },  /* ppt = (11  , 60  , 61  ) */
  { /* A = */ 1111, /* C = */ 5161, /* corr =  0.0311892   */ +0x1.ff00fd8877d63p-6   },  /* ppt = (1111, 5040, 5161) */
  { /* A = */ 1134, /* C = */ 5166, /* corr =  0.00439355  */ +0x1.1fef8f3534436p-8   },  /* ppt = (9   , 40  , 41  ) */
  { /* A = */ 1280, /* C = */ 5200, /* corr =  0.00131443  */ +0x1.5891c9eaef76ap-10  },  /* ppt = (16  , 63  , 65  ) */
  { /* A = */ 1470, /* C = */ 5250, /* corr =  0.00643207  */ +0x1.a58844d36e49ep-8   },  /* ppt = (7   , 24  , 25  ) */
  { /* A = */ 1728, /* C = */ 5328, /* corr =  0.0239722   */ +0x1.88c2d913348fap-6   },  /* ppt = (12  , 35  , 37  ) */
  { /* A = */ 1836, /* C = */ 5364, /* corr =  0.0129249   */ +0x1.a78649c27e9d9p-7   },  /* ppt = (51  , 140 , 149 ) */
};
