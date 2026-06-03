#include "goblin.h"

goblin::goblin() {
	level = 0;
}



//bool goblin::is_live(int level, int level_player) {
//	return this->level < level_player;
//}
int goblin::get_goblin_level() {
	return level;
}

void goblin::set_goblin_level(int level) {
	this->level = level;
}

