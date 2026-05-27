#pragma once
#include "player.h"

class goblin
{
private:

	int goblin_level;


public:

	goblin();

	int get_random_level_gobline(int level_player);

	int get_goblin_level();


	bool is_live(int level_gobline, int level_player);

	void set_goblin_level(int gb_lv);

};

