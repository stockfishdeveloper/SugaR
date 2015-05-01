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

#ifndef TIMEMAN_H_INCLUDED
#define TIMEMAN_H_INCLUDED

#include "misc.h"
#include "search.h"

/// The TimeManagement class computes the optimal time to think depending on
/// the maximum available time, the game move number and other parameters.

class TimeManagement {
public:
  void init(Search::LimitsType& limits, Color us, int ply, TimePoint now);
  void pv_instability(double bestMoveChanges) { unstablePvFactor = 1 + bestMoveChanges; }
  int available() const { return int(optimumTime * unstablePvFactor * 0.80); }
  int maximum() const { return maximumTime; }
  int elapsed() const { return int(Search::Limits.npmsec ? Search::RootPos.nodes_searched() : now() - start); }

  int64_t availableNodes; // When in 'nodes as time' mode

private:
  TimePoint start;
  int optimumTime;
  int maximumTime;
  double unstablePvFactor;
};

extern TimeManagement Time;

#endif // #ifndef TIMEMAN_H_INCLUDED
