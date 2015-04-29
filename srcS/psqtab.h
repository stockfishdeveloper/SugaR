/*
# SugaR, a UCI chess playing engine derived from Stockfish
# Copyright (C) 2008-2015 Marco Costalba, Joona Kiiski, Tord Romstad
# SugaR is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# SugaR is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PSQTAB_H_INCLUDED
#define PSQTAB_H_INCLUDED

#include "types.h"

#define S(mg, eg) make_score(mg, eg)


/// PSQT[PieceType][Square] contains Piece-Square scores. For each piece type on
/// a given square a (middlegame, endgame) score pair is assigned. PSQT is defined
/// for the white side and the tables are symmetric for the black side.

static const Score PSQT[][SQUARE_NB] = {
  { },
  { // Pawn
   S(  0, 0), S(  0, 0), S( 0, 0), S( 0, 0), S( 0, 0), S( 0, 0), S(  0, 0), S(  0, 0),
   S(-22-10, 4-10), S(  3-10,-6-10), S( 7-10, 8-10), S( 3-10,-1-10), S( 3-10,-1-10), S( 7-10, 8-10), S(  3-10,-6-10), S(-22-10, 4-10),
   S(-25-10,-3-10), S( -7-10,-4-10), S(18-10, 4-10), S(24-10, 5-10), S(24-10, 5-10), S(18-10, 4-10), S( -7-10,-4-10), S(-25-10,-3-10),
   S(-27-10, 1-10), S(-15-10, 2-10), S(15-10,-8-10), S(30-10,-2-10), S(30-10,-2-10), S(15-10,-8-10), S(-15-10, 2-10), S(-27-10, 1-10),
   S(-14-10, 7-10), S(  0-10,12-10), S(-2-10, 4-10), S(18-10,-3-10), S(18-10,-3-10), S(-2-10, 4-10), S(  0-10,12-10), S(-14-10, 7-10),
   S(-12-10, 8-10), S(-13-10,-5-10), S(-6-10, 1-10), S(-4-10, 7-10), S(-4-10, 7-10), S(-6-10, 1-10), S(-13-10,-5-10), S(-12-10, 8-10),
   S(-17-10, 1-10), S( 10-10,-9-10), S(-4-10, 1-10), S(-6-10,16-10), S(-6-10,16-10), S(-4-10, 1-10), S( 10-10,-9-10), S(-17-10, 1-10),
   S(  0, 0), S(  0, 0), S( 0, 0), S( 0, 0), S( 0, 0), S( 0, 0), S(  0, 0), S(  0, 0)
  },
  { // Knight
   S(-144-70,-98-70), S(-109-70,-83-70), S(-85-70,-51-70), S(-73-70,-16-70), S(-73-70,-16-70), S(-85-70,-51-70), S(-109-70,-83-70), S(-144-70,-98-70),
   S( -88-70,-68-70), S( -43-70,-53-70), S(-19-70,-21-70), S( -7-70, 14-70), S( -7-70, 14-70), S(-19-70,-21-70), S( -43-70,-53-70), S( -88-70,-68-70),
   S( -69-70,-53-70), S( -24-70,-38-70), S(  0-70, -6-70), S( 12-70, 29-70), S( 12-70, 29-70), S(  0-70, -6-70), S( -24-70,-38-70), S( -69-70,-53-70),
   S( -28-70,-42-70), S(  17-70,-27-70), S( 41-70,  5-70), S( 53-70, 40-70), S( 53-70, 40-70), S( 41-70,  5-70), S(  17-70,-27-70), S( -28-70,-42-70),
   S( -30-70,-42-70), S(  15-70,-27-70), S( 39-70,  5-70), S( 51-70, 40-70), S( 51-70, 40-70), S( 39-70,  5-70), S(  15-70,-27-70), S( -30-70,-42-70),
   S( -10-70,-53-70), S(  35-70,-38-70), S( 59-70, -6-70), S( 71-70, 29-70), S( 71-70, 29-70), S( 59-70, -6-70), S(  35-70,-38-70), S( -10-70,-53-70),
   S( -64-70,-68-70), S( -19-70,-53-70), S(  5-70,-21-70), S( 17-70, 14-70), S( 17-70, 14-70), S(  5-70,-21-70), S( -19-70,-53-70), S( -64-70,-68-70),
   S(-200-70,-98-70), S( -65-70,-83-70), S(-41-70,-51-70), S(-29-70,-16-70), S(-29-70,-16-70), S(-41-70,-51-70), S( -65-70,-83-70), S(-200-70,-98-70)
  },
  { // Bishop
   S(-54-11,-65-11), S(-27-11,-42-11), S(-34-11,-44-11), S(-43-11,-26-11), S(-43-11,-26-11), S(-34-11,-44-11), S(-27-11,-42-11), S(-54-11,-65-11),
   S(-29-11,-43-11), S(  8-11,-20-11), S(  1-11,-22-11), S( -8-11, -4-11), S( -8-11, -4-11), S(  1-11,-22-11), S(  8-11,-20-11), S(-29-11,-43-11),
   S(-20-11,-33-11), S( 17-11,-10-11), S( 10-11,-12-11), S(  1-11,  6-11), S(  1-11,  6-11), S( 10-11,-12-11), S( 17-11,-10-11), S(-20-11,-33-11),
   S(-19-11,-35-11), S( 18-11,-12-11), S( 11-11,-14-11), S(  2-11,  4-11), S(  2-11,  4-11), S( 11-11,-14-11), S( 18-11,-12-11), S(-19-11,-35-11),
   S(-22-11,-35-11), S( 15-11,-12-11), S(  8-11,-14-11), S( -1-11,  4-11), S( -1-11,  4-11), S(  8-11,-14-11), S( 15-11,-12-11), S(-22-11,-35-11),
   S(-28-11,-33-11), S(  9-11,-10-11), S(  2-11,-12-11), S( -7-11,  6-11), S( -7-11,  6-11), S(  2-11,-12-11), S(  9-11,-10-11), S(-28-11,-33-11),
   S(-32-11,-43-11), S(  5-11,-20-11), S( -2-11,-22-11), S(-11-11, -4-11), S(-11-11, -4-11), S( -2-11,-22-11), S(  5-11,-20-11), S(-32-11,-43-11),
   S(-49-11,-65-11), S(-22-11,-42-11), S(-29-11,-44-11), S(-38-11,-26-11), S(-38-11,-26-11), S(-29-11,-44-11), S(-22-11,-42-11), S(-49-11,-65-11)
  },
  { // Rook
   S(-22+16, 3+16), S(-17+16, 3+16), S(-12+16, 3+16), S(-8+16, 3+16), S(-8+16, 3+16), S(-12+16, 3+16), S(-17+16, 3+16), S(-22+16, 3+16),
   S(-22+16, 3+16), S( -7+16, 3+16), S( -2+16, 3+16), S( 2+16, 3+16), S( 2+16, 3+16), S( -2+16, 3+16), S( -7+16, 3+16), S(-22+16, 3+16),
   S(-22+16, 3+16), S( -7+16, 3+16), S( -2+16, 3+16), S( 2+16, 3+16), S( 2+16, 3+16), S( -2+16, 3+16), S( -7+16, 3+16), S(-22+16, 3+16),
   S(-22+16, 3+16), S( -7+16, 3+16), S( -2+16, 3+16), S( 2+16, 3+16), S( 2+16, 3+16), S( -2+16, 3+16), S( -7+16, 3+16), S(-22+16, 3+16),
   S(-22+16, 3+16), S( -7+16, 3+16), S( -2+16, 3+16), S( 2+16, 3+16), S( 2+16, 3+16), S( -2+16, 3+16), S( -7+16, 3+16), S(-22+16, 3+16),
   S(-22+16, 3+16), S( -7+16, 3+16), S( -2+16, 3+16), S( 2+16, 3+16), S( 2+16, 3+16), S( -2+16, 3+16), S( -7+16, 3+16), S(-22+16, 3+16),
   S(-11+16, 3+16), S(  4+16, 3+16), S(  9+16, 3+16), S(13+16, 3+16), S(13+16, 3+16), S(  9+16, 3+16), S(  4+16, 3+16), S(-11+16, 3+16),
   S(-22+16, 3+16), S(-17+16, 3+16), S(-12+16, 3+16), S(-8+16, 3+16), S(-8+16, 3+16), S(-12+16, 3+16), S(-17+16, 3+16), S(-22+16, 3+16)
  },
  { // Queen
   S(-2-10,-80-10), S(-2-10,-54-10), S(-2-10,-42-10), S(-2-10,-30-10), S(-2-10,-30-10), S(-2-10,-42-10), S(-2-10,-54-10), S(-2-10,-80-10),
   S(-2-10,-54-10), S( 8-10,-30-10), S( 8-10,-18-10), S( 8-10, -6-10), S( 8-10, -6-10), S( 8-10,-18-10), S( 8-10,-30-10), S(-2-10,-54-10),
   S(-2-10,-42-10), S( 8-10,-18-10), S( 8-10, -6-10), S( 8-10,  6-10), S( 8-10,  6-10), S( 8-10, -6-10), S( 8-10,-18-10), S(-2-10,-42-10),
   S(-2-10,-30-10), S( 8-10, -6-10), S( 8-10,  6-10), S( 8-10, 18-10), S( 8-10, 18-10), S( 8-10,  6-10), S( 8-10, -6-10), S(-2-10,-30-10),
   S(-2-10,-30-10), S( 8-10, -6-10), S( 8-10,  6-10), S( 8-10, 18-10), S( 8-10, 18-10), S( 8-10,  6-10), S( 8-10, -6-10), S(-2-10,-30-10),
   S(-2-10,-42-10), S( 8-10,-18-10), S( 8-10, -6-10), S( 8-10,  6-10), S( 8-10,  6-10), S( 8-10, -6-10), S( 8-10,-18-10), S(-2-10,-42-10),
   S(-2-10,-54-10), S( 8-10,-30-10), S( 8-10,-18-10), S( 8-10, -6-10), S( 8-10, -6-10), S( 8-10,-18-10), S( 8-10,-30-10), S(-2-10,-54-10),
   S(-2-10,-80-10), S(-2-10,-54-10), S(-2-10,-42-10), S(-2-10,-30-10), S(-2-10,-30-10), S(-2-10,-42-10), S(-2-10,-54-10), S(-2-10,-80-10)
  },
  { // King
   S(298, 27), S(332, 81), S(273,108), S(225,116), S(225,116), S(273,108), S(332, 81), S(298, 27),
   S(287, 74), S(321,128), S(262,155), S(214,163), S(214,163), S(262,155), S(321,128), S(287, 74),
   S(224,111), S(258,165), S(199,192), S(151,200), S(151,200), S(199,192), S(258,165), S(224,111),
   S(196,135), S(230,189), S(171,216), S(123,224), S(123,224), S(171,216), S(230,189), S(196,135),
   S(173,135), S(207,189), S(148,216), S(100,224), S(100,224), S(148,216), S(207,189), S(173,135),
   S(146,111), S(180,165), S(121,192), S( 73,200), S( 73,200), S(121,192), S(180,165), S(146,111),
   S(119, 74), S(153,128), S( 94,155), S( 46,163), S( 46,163), S( 94,155), S(153,128), S(119, 74),
   S( 98, 27), S(132, 81), S( 73,108), S( 25,116), S( 25,116), S( 73,108), S(132, 81), S( 98, 27)
  }
};

#undef S

#endif // #ifndef PSQTAB_H_INCLUDED
