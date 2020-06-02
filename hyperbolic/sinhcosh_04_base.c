// Pythagorean-triple-based table generation
//   for hyperbolic function evaluation
//
// [Fri Nov  4 15:50:58 2016]
//
// Table generated for the following parameters
//     --index-size=4
//     --addressing=base
//     --algorithm=heuristic

static const double lcm = 840;
static const double PPTTABLE[6][3] =
{
  { /* A = */ 0  , /* C = */ 840, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0 , 1  , 1  ) */
  { /* A = */ 58 , /* C = */ 842, /* corr =  0.00649287  */ +0x1.a9844eb18ef13p-8   },  /* ppt = (29, 420, 421) */
  { /* A = */ 130, /* C = */ 850, /* corr =  0.0291507   */ +0x1.dd9ad020e9549p-6   },  /* ppt = (13, 84 , 85 ) */
  { /* A = */ 189, /* C = */ 861, /* corr =  0.0356436   */ +0x1.23fdf1e6a6887p-5   },  /* ppt = (9 , 40 , 41 ) */
  { /* A = */ 245, /* C = */ 875, /* corr =  0.0376821   */ +0x1.34b1089a6dc94p-5   },  /* ppt = (7 , 24 , 25 ) */
  { /* A = */ 288, /* C = */ 888, /* corr =  0.0239722   */ +0x1.88c2d913348fap-6   },  /* ppt = (12, 35 , 37 ) */
};
