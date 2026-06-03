#include "Orc.h"

Orc::Orc() {
	level = 0;
}



//bool Orc::is_live(int level, int level_player) {
//	return this->level < level_player;
//}
int Orc::get_orc_level() {
	return level;
}

void Orc::set_orc_level(int level) {
	this->level = level;
}