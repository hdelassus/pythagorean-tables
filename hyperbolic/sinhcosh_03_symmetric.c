// Pythagorean-triple-based table generation
//   for hyperbolic function evaluation
//
// [Fri Nov  4 15:50:54 2016]
//
// Table generated for the following parameters
//     --index-size=3
//     --addressing=symmetric
//     --algorithm=heuristic

static const double lcm = 144;
static const double PPTTABLE[4][3] =
{
  { /* A = */ 0 , /* C = */ 144, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0 , 1  , 1  ) */
  { /* A = */ 17, /* C = */ 145, /* corr = -0.00721696  */ -0x1.d8f891d50d1a1p-8   },  /* ppt = (17, 144, 145) */
  { /* A = */ 42, /* C = */ 150, /* corr =  0.0376821   */ +0x1.34b1089a6dc94p-5   },  /* ppt = (7 , 24 , 25 ) */
  { /* A = */ 60, /* C = */ 156, /* corr =  0.0304651   */ +0x1.f323ecbf984bfp-6   },  /* ppt = (5 , 12 , 13 ) */
};
