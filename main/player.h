#include "logic.h"

class player {
public:

	int level;
	int age;
	int state_power;
	int state_stamina;
	int state_agility;
	int state_intelligence;
	int free_state_point = (level * 3)- (state_agility + state_intelligence + state_power + state_stamina);


	string name_player;
	string classes;
	string guild_name;
	string title;

	string toString() {
		string msg = "Name player: " + name_player + "\n";
		msg += " Title of player: " + title + "\n";
		msg += "Age of character: " + to_string(age) + "\n";
		msg += "Name guilde: " + guild_name + "\n";
		msg += "Level of player " + to_string(level) + "\n";
		msg += "Player classes: " + classes + "\n";
		msg += "State power: " + to_string(state_power) + "\n";
		msg += "State stamina: " + to_string(state_stamina) + "\n";
		msg += "State agility: " + to_string(state_agility) + "\n";
		msg += "State intelligence: " + to_string(state_intelligence) + "\n";
		msg += "Free state points: " + to_string(free_state_point) + "\n";

		return msg;
	}

};