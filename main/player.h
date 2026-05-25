#include "logic.h"

class player {
public:

	int level;
	int age;
	int state_power;
	int state_stamina;
	int state_agility;
	int state_intelligence;
	int free_state_point;

	string name_player;
	string classes;
	string guild_name;
	string title;
	string* skills;

	player() {
		// default constructor
		level = 0;
		age = 0;
		state_power = 0;
		state_staminav = 0;
		state_agility = 0;
		state_intelligence = 0;
		free_state_point = 0;
		name_player = "";
		classes = "";
		guild_name = "";
		title = "";
		skills = new string[NUMBER_OF_SKILLS]{"", "", "",};
	}


	//canonical constructor
	player(int lv, int ag, int st_p, int st_s, int st_a, int st_i,
		int fr_st, string nm, string cls, string gld_nm, string tl, string skl) {
		level = lv;
		age = ag;
		state_power = st_p;
		state_staminav = st_s;
		state_agility = st_a;
		state_intelligence = st_i;
		free_state_point = fr_st;
		name_player = nm;
		classes = cls;
		guild_name = gld_nm;
		title = tl;
		skills = new string[NUMBER_OF_SKILLS]{ "", "", "", };


	}

	player(const Student& student) {
		//Copy constract
		level = player.level;
		age = player.age;
		state_power = player.state_power;
		state_staminav = player.state_stamina;
		state_agility = player.state_agility;
		state_intelligence = player.state_intelligence;
		free_state_point = player.free_state_point;
		name_player = player.string name_player;
		classes = player.classes;
		guild_name = player.guild_name;
		title = player.title;
		skills = new string[3]{ player.skills[0],
			player.skills[1],
			player.skills[2], };

	}

	~player() {
		//destractor
		if (skills != NULL) {
			delete[] skills;
		}
	}


	string toString() {
		string msg = "Name player: " + name_player + "\n";
		msg += "Title of player: " + title + "\n";
		msg += "Age of character: " + to_string(age) + "\n";
		msg += "Name guilde: " + guild_name + "\n";
		msg += "Level of player " + to_string(level) + "\n";
		msg += "Player classes: " + classes + "\n";
		msg += "State power: " + to_string(state_power) + "\n";
		msg += "State stamina: " + to_string(state_stamina) + "\n";
		msg += "State agility: " + to_string(state_agility) + "\n";
		msg += "State intelligence: " + to_string(state_intelligence) + "\n";
		msg += "Free state points: " + to_string(free_state_point) + "\n";
			msg += "skills: ";
		for (int i = 0; i < NUMBER_OF_SKILLS; i++) {
			msg += skills[i] + ", ";
		}
		msg += "\n";

			return msg;
	}

};