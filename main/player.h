#include "logic.h"

class player {
public:

	int level
		int age
		int state_power
		int state_stamina
		int state_agility
		int state_intelligence
		int free_state_point


		string name_player
		string classes03d.0
		string guild_name
		string title

	player() {
		level = 0;
		age = 0;
		state_power = 0;
		state_staminav
		state_agility = 0;
		state_intelligence = 0;
		free_state_point = 0;
		name_player = "";
		classes = "";
		guild_name = "";
		title = "";

	}

	string toString() {
		string msg = "Name player: " + name_player + "\n"
			msg += "Title of player: " + title + "\n"
			msg += "Age of character: " + to_string(age) + "\n"
			msg += "Name guilde: " + guild_name + "\n"
			msg += "Level of player " + to_string(level) + "\n"
			msg += "Player classes: " + classes + "\n"
			msg += "State power: " + to_string(state_power) + "\n"
			msg += "State stamina: " + to_string(state_stamina) + "\n"
			msg += "State agility: " + to_string(state_agility) + "\n"

			msg += "State intelligence: " + to_string(state_intelligence) + "\n"
			msg += "Free state points: " + to_string(free_state_point) + "\n"

			return msg
	}

}