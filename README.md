# pythagorean-tables
Data tables of Pythagorean triples for trigonometric and hyperbolic functions
approximations.

## Introduction
This repository contains lookup tables that can be used in approximations of
trigonometric and hyperbolic sine and cosine functions, commonly found in
mathematical libraries such as the GNU glibc libm. Detailed descriptions of
their generation and usage are available in two published papers as well as in
the second chapter of my Ph.D. thesis, all three referenced below.

Two modes of addressing are available:
- `base`: the first `p` bits of an input define the _beginning_ of its
  corresponding table entry. The corrective terms are bounded by `2^-p`.
- `symmetric`: an input correctly rounded to the nearest `p`-bit number define
  the _center_ of its table entry. The corrective terms are bounded by
  `2^-(p+1)`.

## References
* H. de Lassus Saint-Geniès, D. Defour and G. Revy, "Exact Lookup Tables for
  the Evaluation of Trigonometric and Hyperbolic Functions," in IEEE
  Transactions on Computers, vol. 66, no. 12, pp. 2058-2071, 1 Dec. 2017, doi:
  [10.1109/TC.2017.2703870](https://dx.doi.org/10.1109/TC.2017.2703870),
  preprint:
  [PDF](https://hal-lirmm.ccsd.cnrs.fr/lirmm-01844332/file/deLasDefRev16-ieeeTC-revision.pdf).

* H. de Lassus Saint-Geniès, D. Defour and G. Revy, "Range reduction based on
  Pythagorean triples for trigonometric function evaluation," 2015 IEEE 26th
  International Conference on Application-specific Systems, Architectures and
  Processors (ASAP), Toronto, ON, 2015, pp. 74-81, doi:
  [10.1109/ASAP.2015.7245712](https://dx.doi.org/10.1109/ASAP.2015.7245712),
  preprint:
  [PDF](https://hal.archives-ouvertes.fr/hal-01134232/file/pythagorean_triples.pdf).

* Hugues de Lassus Saint-Geniès. "Elementary functions : towards automatically
  generated, efficient, and vectorizable implementations", Other [cs.OH].
  Université de Perpignan, 2018. English. NNT : 2018PERP0010.
  [tel-01841424](https://tel.archives-ouvertes.fr/tel-01841424/).

## License
[LGPL v3](LICENSE)
