// Pythagorean-triple-based table generation
//   for trigonometric function evaluation
//
// [Fri Nov  4 12:10:39 2016]
//
// Table generated for the following parameters
//     --index-size=3
//     --addressing=symmetric
//     --algorithm=heuristic

static const double lcm = 425;
static const double cos_sin[7][3] =
{
  { /* A = */ 0  , /* B = */ 425, /* corr =  0           */ +0x0.0000000000000p+0   },  /* ppt = (0  ,1  ,1  ) */
  { /* A = */ 65 , /* B = */ 420, /* corr =  0.0285438   */ +0x1.d3a94d20bce4ep-6   },  /* ppt = (13 ,84 ,85 ) */
  { /* A = */ 119, /* B = */ 408, /* corr =  0.0337941   */ +0x1.14d7623b1c6e4p-5   },  /* ppt = (7  ,24 ,25 ) */
  { /* A = */ 180, /* B = */ 385, /* corr =  0.0623379   */ +0x1.feac08cb7ae0bp-5   },  /* ppt = (36 ,77 ,85 ) */
  { /* A = */ 200, /* B = */ 375, /* corr = -0.0100427   */ -0x1.49140da6fe454p-7   },  /* ppt = (8  ,15 ,17 ) */
  { /* A = */ 255, /* B = */ 340, /* corr =  0.0185011   */ +0x1.2f1f464d3dc25p-6   },  /* ppt = (3  ,4  ,5  ) */
  { /* A = */ 297, /* B = */ 304, /* corr =  0.0237514   */ +0x1.8524bda2b9b9fp-6   },  /* ppt = (297,304,425) */
};
