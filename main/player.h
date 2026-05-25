#include "logic.h"

class player {
public:

	int number_of_skills = NUMBER_OF_SKILLS;

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
		state_stamina = 0;
		state_agility = 0;
		state_intelligence = 0;
		free_state_point = 0;
		name_player = "";
		classes = "";
		guild_name = "";
		title = "";
		skills = new string[number_of_skills]{ "", "", "", };
	}


	//canonical constructor
	player(int lv, int ag, int st_p, int st_s, int st_a, int st_i,
		int fr_st, string nm, string cls, string gld_nm, string tl, string skl) {
		level = lv;
		age = ag;
		state_power = st_p;
		state_stamina = st_s;
		state_agility = st_a;
		state_intelligence = st_i;
		free_state_point = fr_st;
		name_player = nm;
		classes = cls;
		guild_name = gld_nm;
		title = tl;
		skills = new string[number_of_skills]{ "", "", "", };


	}

	player(const player& player) {
		//Copy constract
		level = player.level;
		age = player.age;
		state_power = player.state_power;
		state_stamina = player.state_stamina;
		state_agility = player.state_agility;
		state_intelligence = player.state_intelligence;
		free_state_point = player.free_state_point;
		name_player = player.name_player;
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
		string msg = "------player:" + name_player + " \n";
		msg += "------title:" + title + "\n";
		msg += "------Age:" + to_string(age) + "\n";
		msg += "------guilde:" + guild_name + "\n";
		msg += "------level" + to_string(level) + "\n";
		msg += "------classes:" + classes + "\n";
		msg += "------staste------\n";
		msg += "------power:" + to_string(state_power) + "\n";
		msg += "------stamina:" + to_string(state_stamina) + "\n";
		msg += "------agility:" + to_string(state_agility) + "\n";
		msg += "------intelligence:" + to_string(state_intelligence) + "\n";
		msg += "------free state points:" + to_string(free_state_point) + "\n";
		msg += "------skills------\n";
		for (int i = 0; i < number_of_skills; i++) {
			msg += "------skill number " + to_string(i + 1) + ':' + skills[i] + "\n";
		}


		return msg;
	}

};