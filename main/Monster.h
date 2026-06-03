#pragma once
#include"logic.h"
class Monster
{
protected:
	int level;

public:
	Monster();
	Monster(int level);

	int get_level();
	void set_level(int level);

	int get_random_level(int level_player);

	bool is_live(int level, int level_player);

	string toString();
};

