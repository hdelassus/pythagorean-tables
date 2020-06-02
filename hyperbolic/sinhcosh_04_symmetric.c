// Pythagorean-triple-based table generation
//   for hyperbolic function evaluation
//
// [Fri Nov  4 15:50:54 2016]
//
// Table generated for the following parameters
//     --index-size=4
//     --addressing=symmetric
//     --algorithm=heuristic

static const double lcm = 840;
static const double PPTTABLE[7][3] =
{
  { /* A = */ 0  , /* C = */ 840, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0 , 1  , 1  ) */
  { /* A = */ 58 , /* C = */ 842, /* corr =  0.00649287  */ +0x1.a9844eb18ef13p-8   },  /* ppt = (29, 420, 421) */
  { /* A = */ 130, /* C = */ 850, /* corr =  0.0291507   */ +0x1.dd9ad020e9549p-6   },  /* ppt = (13, 84 , 85 ) */
  { /* A = */ 154, /* C = */ 854, /* corr = -0.00517844  */ -0x1.535fdc36d3139p-8   },  /* ppt = (11, 60 , 61 ) */
  { /* A = */ 189, /* C = */ 861, /* corr = -0.0268564   */ -0x1.b8041c32b2ef3p-6   },  /* ppt = (9 , 40 , 41 ) */
  { /* A = */ 288, /* C = */ 888, /* corr =  0.0239722   */ +0x1.88c2d913348fap-6   },  /* ppt = (12, 35 , 37 ) */
  { /* A = */ 306, /* C = */ 894, /* corr = -0.0183251   */ -0x1.2c3cdb1ec0b14p-6   },  /* ppt = (51, 140, 149) */
};
