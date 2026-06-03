#pragma once
#include "Monster.h"


class goblin : public Monster
{


public:

	goblin();

	//int get_random_level(int level_player);

	int get_goblin_level();


	//bool is_live(int level, int level_player);

	void set_goblin_level(int level);

};

