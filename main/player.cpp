#include "player.h"

player::player() {
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
player::player(int lv, int ag, int st_p, int st_s, int st_a, int st_i,
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

player::player(const player& player) {
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

player::~player() {
	//destractor
	if (skills != NULL) {
		delete[] skills;
	}
}


string player::toString() {
	string msg = "------player:" + name_player + " \n";
	msg += "------title:" + title + "\n";
	msg += "------Age:" + to_string(age) + "\n";
	msg += "------guilde:" + guild_name + "\n";
	msg += "------level:" + to_string(level) + "\n";
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

	//get
	
	string player::get_name_player() {
		return name_player;
	}

	string player::get_title() {
		return title;
	}

	string player::get_guild_name() {
		return guild_name;
	}

	string player::get_classes() {
		return classes;
	}

	string* player::get_skills() {
		return skills;
	}

	int player::get_age() {
		return age;
	}

	int player::get_level() {
		return level;
	}

	int player::get_state_power() {
		return state_power;
	}

	int player::get_state_stamina() {
		return state_stamina;
	}

	int player::get_state_agility() {
		return state_agility;
	}

	int player::get_state_intelligence() {
		return state_intelligence;
	}

	int player::get_free_state_point() {
		return free_state_point;
	}

	//set

	void player::set_name_player(string nm) {
		name_player = nm;
	}

	void player::set_title(string tl) {
		title = tl;
	}

	void player::set_guild_name(string gld_nm) {
		guild_name = gld_nm;
	}

	void player::set_classes(string cls) {
		classes = cls;
	}

	void player::set_skills(string* skl, int size) {
		if (skills != nullptr) {
			delete[] skills;
			skills = new string[size];
			for (int i = 0; i < size; i++)
			{
				skills[i] = skl[i];
			}
		}
	}

	

	void player::set_age(int ag) {
		age = age;
	}

	void player::set_level(int lv) {
		if (lv > 0) {
			level = lv;
		}
	}

	void player::set_state_power(int st_p) {
		if (st_p > -1) {
			state_power = st_p;
		}
	}

	void player::set_state_stamina(int st_s) {
		if (st_s > -1) {
			state_stamina = st_s;
		}
	}

	void player::set_state_agility(int st_a) {
		if (st_a > -1) {
			state_agility = st_a;
		}
	}

	void player::set_state_intelligence(int st_i) {
		if (st_i > -1) {
			state_intelligence = st_i;
		}
	}

	void player::set_free_state_point(int fr_st) {
		free_state_point = fr_st;
	}



