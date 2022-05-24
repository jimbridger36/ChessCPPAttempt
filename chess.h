/* Generated by Cython 0.29.21 */

#ifndef __PYX_HAVE__chess
#define __PYX_HAVE__chess

#include "Python.h"
struct PiecePos;

/* "chess.pyx":1070
 * # ported
 * IF True:
 * 	ctypedef public enum PieceEnum:             # <<<<<<<<<<<<<<
 * 		empty = 0
 * 		pawn = 1
 */
enum PieceEnum {

  /* "chess.pyx":1081
 * 		white = 0
 * 		black = 8
 * 		wpawn = pawn | white             # <<<<<<<<<<<<<<
 * 
 * 
 */
  empty = 0,
  pawn = 1,
  knight = 2,
  bishop = 3,
  rook = 4,
  king = 5,
  queen = 6,
  white = 0,
  black = 8,
  wpawn = (pawn | white)
};
typedef enum PieceEnum PieceEnum;

/* "chess.pyx":413
 * # declaring PiecePos and makePiecePos
 * IF True:
 * 	cdef public struct PiecePos:             # <<<<<<<<<<<<<<
 * 		int piece
 * 		int pos
 */
struct PiecePos {
  int piece;
  int pos;
};

#ifndef __PYX_HAVE_API__chess

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C PyArrayObject *distanceInfoArrVec;
__PYX_EXTERN_C PyArrayObject *distanceSquare;
__PYX_EXTERN_C PyArrayObject *distanceInfoFlat;

#endif /* !__PYX_HAVE_API__chess */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initchess(void);
#else
PyMODINIT_FUNC PyInit_chess(void);
#endif

#endif /* !__PYX_HAVE__chess */
