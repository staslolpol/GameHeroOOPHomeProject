#include "player.h"

player::player() {
	// default constructor
	level = 1;
	age = 1;
	state_power = 0;
	state_stamina = 0;
	state_agility = 0;
	state_intelligence = 0;
	free_state_point = 0;
	name_player = "no name";
	classes = "none";
	guild_name = "none";
	title = "noob";
	skills = new string[number_of_skills]{ "", "", "", };
}


//canonical constructor
player::player(int level, int age, int state_power, int state_stamina, int state_agility, int st_i,
	int free_state_point, string name_player, string classes, string guild_name, string title, string skills) {
	this->level = level;
	this->age = age;
	this->state_power = state_power;
	this->state_stamina = state_stamina;
	this->state_agility = state_agility;
	this->state_intelligence = st_i;
	this->free_state_point = free_state_point;
	this->name_player = name_player;
	this->classes = classes;
	this->guild_name = guild_name;
	this->title = title;
	this->skills = new string[number_of_skills]{ "", "", "", };


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
		skills = nullptr;
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

void player::set_name_player(string name_player) {
	this->name_player = name_player;
}

void player::set_title(string title) {
	this->title = title;
}

void player::set_guild_name(string guild_name) {
	this->guild_name = guild_name;
}

void player::set_classes(string classes) {
	this->classes = classes;
}

void player::set_skills(string* skills, int size) {
	if (skills != nullptr && size > 0) {
		delete[] this->skills;
		this->skills = new string[size];
		for (int i = 0; i < size; i++) {
			this->skills[i] = skills[i];
		}
	}
}


void player::set_age(int age) {
	this->age = age;
}

void player::set_level(int level) {
	if (level > 0) {
		this->level = level;
	}
}

void player::set_state_power(int state_power) {
	if (state_power > -1) {
		this->state_power = state_power;
	}
}

void player::set_state_stamina(int state_stamina) {
	if (state_stamina > -1) {
		this->state_stamina = state_stamina;
	}
}

void player::set_state_agility(int state_agility) {
	if (state_agility > -1) {
		this->state_agility = state_agility;
	}
}

void player::set_state_intelligence(int state_intelligence) {
	if (state_intelligence > -1) {
		this->state_intelligence = state_intelligence;
	}
}

void player::set_free_state_point(int free_state_point) {
	this->free_state_point = free_state_point;
}



