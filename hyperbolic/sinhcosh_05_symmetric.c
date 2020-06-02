// Pythagorean-triple-based table generation
//   for hyperbolic function evaluation
//
// [Fri Nov  4 15:50:54 2016]
//
// Table generated for the following parameters
//     --index-size=5
//     --addressing=symmetric
//     --algorithm=heuristic

static const double lcm = 10080;
static const double PPTTABLE[12][3] =
{
  { /* A = */ 0   , /* C = */ 10080, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0   , 1   , 1   ) */
  { /* A = */ 284 , /* C = */ 10084, /* corr = -0.00307912  */ -0x1.93963974f0cb6p-9   },  /* ppt = (71  , 2520, 2521) */
  { /* A = */ 651 , /* C = */ 10101, /* corr =  0.00203852  */ +0x1.0b316b3c740d1p-9   },  /* ppt = (31  , 480 , 481 ) */
  { /* A = */ 1064, /* C = */ 10136, /* corr =  0.0116105   */ +0x1.7c74108520aebp-7   },  /* ppt = (19  , 180 , 181 ) */
  { /* A = */ 1190, /* C = */ 10150, /* corr = -0.00721696  */ -0x1.d8f891d50d1a1p-8   },  /* ppt = (17  , 144 , 145 ) */
  { /* A = */ 1560, /* C = */ 10200, /* corr = -0.00209932  */ -0x1.13297ef8b55bbp-9   },  /* ppt = (13  , 84  , 85  ) */
  { /* A = */ 1848, /* C = */ 10248, /* corr = -0.00517844  */ -0x1.535fdc36d3139p-8   },  /* ppt = (11  , 60  , 61  ) */
  { /* A = */ 2222, /* C = */ 10322, /* corr = -6.0799e-05  */ -0x1.fe04ef1053a97p-15  },  /* ppt = (1111, 5040, 5161) */
  { /* A = */ 2560, /* C = */ 10400, /* corr =  0.00131443  */ +0x1.5891c9eaef76ap-10  },  /* ppt = (16  , 63  , 65  ) */
  { /* A = */ 2940, /* C = */ 10500, /* corr =  0.00643207  */ +0x1.a58844d36e49ep-8   },  /* ppt = (7   , 24  , 25  ) */
  { /* A = */ 3237, /* C = */ 10587, /* corr =  0.00335295  */ +0x1.b77a5031ebc86p-9   },  /* ppt = (1079, 3360, 3529) */
  { /* A = */ 3456, /* C = */ 10656, /* corr = -0.00727776  */ -0x1.dcf49bb32dc17p-8   },  /* ppt = (12  , 35  , 37  ) */
};
