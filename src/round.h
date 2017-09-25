#ifndef ROUND_H
#define ROUND_H
#include "boneyard.h"
#include "tile.h"
#include "board.h"
#include "human.h"
#include "computer.h"
#include <vector>
#include <algorithm>
#include <cstdlib>

#define MAX_PIPS 6
#define MIN_PIPS 0
#define MAX_HAND_SIZE 8

class Round {
public:
	// default cstor
	Round() {}

	// copy cstor
	Round(const Round &r);
	
	// caller function
	void run(vector<Player> &players, const int &round_num);

	// creates player objects and pushes them to players vector
	void setup_players(vector<Player> &players);

	void find_engine(vector<Player> &ps, const int &round_num);

	// pop shuffled vector into players' hands and boneyard
	void distribute_tiles(vector<Player> &players);
private:
	Boneyard boneyard;
	Board board;
	Player * curr_player;
};

#endif