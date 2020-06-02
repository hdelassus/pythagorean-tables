// Pythagorean-triple-based table generation
//   for trigonometric function evaluation
//
// [Fri Nov  4 14:58:38 2016]
//
// Table generated for the following parameters
//     --index-size=3
//     --addressing=base
//     --algorithm=heuristic

static const double lcm = 725;
static const double cos_sin[7][3] =
{
  { /* A = */ 0  , /* B = */ 725, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0  ,1  ,1  ) */
  { /* A = */ 120, /* B = */ 715, /* corr =  0.0412825   */ +0x1.522f99fa3d8fbp-5   },  /* ppt = (24 ,143,145) */
  { /* A = */ 203, /* B = */ 696, /* corr =  0.0337941   */ +0x1.14d7623b1c6e4p-5   },  /* ppt = (7  ,24 ,25 ) */
  { /* A = */ 333, /* B = */ 644, /* corr =  0.102219    */ +0x1.a2b0049630a8cp-4   },  /* ppt = (333,644,725) */
  { /* A = */ 364, /* B = */ 627, /* corr =  0.0259895   */ +0x1.a9cfb5cb80052p-6   },  /* ppt = (364,627,725) */
  { /* A = */ 435, /* B = */ 580, /* corr =  0.0185011   */ +0x1.2f1f464d3dc25p-6   },  /* ppt = (3  ,4  ,5  ) */
  { /* A = */ 500, /* B = */ 525, /* corr =  0.0110128   */ +0x1.68ddad9df6feep-7   },  /* ppt = (20 ,21 ,29 ) */
};
