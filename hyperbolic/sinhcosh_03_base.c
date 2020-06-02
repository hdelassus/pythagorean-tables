// Pythagorean-triple-based table generation
//   for hyperbolic function evaluation
//
// [Fri Nov  4 15:50:58 2016]
//
// Table generated for the following parameters
//     --index-size=3
//     --addressing=base
//     --algorithm=heuristic

static const double lcm = 420;
static const double PPTTABLE[3][3] =
{
  { /* A = */ 0  , /* C = */ 420, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0 , 1 , 1 ) */
  { /* A = */ 65 , /* C = */ 425, /* corr =  0.0291507   */ +0x1.dd9ad020e9549p-6   },  /* ppt = (13, 84, 85) */
  { /* A = */ 144, /* C = */ 444, /* corr =  0.0864722   */ +0x1.6230b644cd23fp-4   },  /* ppt = (12, 35, 37) */
};
