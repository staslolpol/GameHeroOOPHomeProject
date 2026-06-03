#pragma once
#include "Monster.h"


class Orc : public Monster
{


public:

	Orc();

	//int get_random_level(int level_player);

	int get_orc_level();


	bool is_live(int level, int level_player);

	void set_orc_level(int level);

};

