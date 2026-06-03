#include "Monster.h"

Monster::Monster() : level(0) {

}
Monster::Monster(int level) {
	this->level = (level > 0 ? level : 0);
}
int Monster::get_level() {
	return level;
}
void Monster::set_level(int level) {
	this->level = level;
}

int Monster::get_random_level(int level_player) {
	int min_lvl = (level_player - 5 < 0) ? 0 : level_player - 5;
	int max_lvl = level_player + 2;
	
	int level = rand() % (max_lvl - min_lvl + 1) + min_lvl;
	return level;
}

string Monster::toString() {
	return "Monster level = " + to_string(level);
}