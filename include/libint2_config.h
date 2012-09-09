/* include/libint2_config.h.  Generated from libint2_config.h.in by configure.  */

/* This file is automatically processed by configure script.
   It MUST NOT be changed manually after configuration, otherwise
   the library will likely fail to compile or produce erroneous results
 */

#ifndef _libint2_include_libint2config_h_
#define _libint2_include_libint2config_h_

/* The host architecture. */
#define LIBINT_HOST_ARCH "i686-apple-darwin11.1.0"

/* The target architecture. */
#define LIBINT_TARGET_ARCH "i686-apple-darwin11.1.0"

/* The version number. */
#define LIBINT_VERSION "2.0.0-stable"

/* The major version number. */
#define LIBINT_MAJOR_VERSION 2

/* The minor version number. */
#define LIBINT_MINOR_VERSION 0

/* The micro version number. */
#define LIBINT_MICRO_VERSION 0

/* Prefix for all names in API */
/* #undef LIBINT_API_PREFIX */

/* Max AM */
#define LIBINT_MAX_AM 7

/* Max optimized AM */
#define LIBINT_OPT_AM 4

/* Support ERI derivatives up to this order */
#define INCLUDE_ERI 0

/* Support G12 derivatives up to this order */
/* #undef INCLUDE_G12 */

/* Support general G12 derivatives up to this order */
/* #undef INCLUDE_GENG12 */

/* Support G12DKH derivatives up to this order */
/* #undef INCLUDE_G12DKH */

/* Max AM for ERI */
#define ERI_MAX_AM 7

/* Max optimized AM for ERI */
#define ERI_OPT_AM 4

/* Max AM for G12 method integrals */
/* #undef G12_MAX_AM */

/* Max optimized AM for G12 method integrals */
/* #undef G12_OPT_AM */

/* Support [Ti,G12] ? */
/* #undef SUPPORT_T1G12 */

/* Max AM for G12 method integrals */
/* #undef GENG12_MAX_AM */

/* Max optimized AM for G12 method integrals */
/* #undef GENG12_OPT_AM */

/* Max AM for G12DKH method integrals */
/* #undef G12DKH_MAX_AM */

/* Max optimized AM for G12DKH method integrals */
/* #undef G12DKH_OPT_AM */

/* Whether integral sets can be unrolled */
/* #undef LIBINT_ENABLE_UNROLLING */

/* Whether generic code can be used */
#define LIBINT_ENABLE_GENERIC_CODE 1

/* maximum length of vectors */
/* #undef LIBINT_VECTOR_LENGTH */

/* how to vectorize */
/* #undef LIBINT_VECTOR_METHOD */

/* Specifies the ordering of cartesian Gaussians in a shell. Allowed values are defined at the bottom of this file -- also see configure.in*/
#define LIBINT_CGSHELL_ORDERING 1

/* Specifies the set of shell quartets generated. Allowed values are defined at the bottom of this file -- also see configure.in*/
#define LIBINT_SHELLQUARTET_SET 1

/* User-defined float type */
/* #undef LIBINT_USER_DEFINED_FLOAT */

/* Accumulate integrals to the buffer? */
/* #undef LIBINT_ACCUM_INTS */

/* Whether FLOP counting is supported */
/* #undef LIBINT_FLOP_COUNT */

/* Support contracted integrals? */
#define LIBINT_CONTRACTED_INTS 1

/* Generate single evaluator type? */
#define LIBINT_SINGLE_EVALTYPE 1

/* Generate composite evaluators? */
#define LIBINT_USE_COMPOSITE_EVALUATORS 1

/* Strategy for ERI evaluation */
#define LIBINT_ERI_STRATEGY 1

/* have stdint.h ? */
#define HAVE_STDINT_H 1

/* C++ compiler allows template with default params as template template parameter */
/* #undef CXX_ALLOWS_DEFPARAMTEMPLATE_AS_TEMPTEMPPARAM */

/* is shared_ptr in boost? */
#define HAVE_SHARED_PTR_IN_BOOST 1

/*
  Known orderings of cartesian functions
*/
#define LIBINT_CGSHELL_ORDERING_STANDARD 1
#define LIBINT_CGSHELL_ORDERING_INTV3 2
#define LIBINT_CGSHELL_ORDERING_GAMESS 3
#define LIBINT_CGSHELL_ORDERING_ORCA 4
/*
  Known sets of shell quartets
*/
#define LIBINT_SHELLQUARTET_SET_STANDARD 1
#define LIBINT_SHELLQUARTET_SET_ORCA 2

#endif 
