#include "goblin.h"

goblin::goblin() {
	goblin_level = 0;
}

int goblin::get_random_level_gobline(int level_player) {
	int golin_level = rand() % ((level_player -5 ) - (level_player + 2) + 1);
	
	return golin_level;
}

bool goblin::is_live(int level_gobline, int level_player) {
	return level_gobline < level_player;
}

int goblin::get_goblin_level() {
	return goblin_level;
}

void goblin::set_goblin_level(int gb_lv) {
	goblin_level = gb_lv;
}