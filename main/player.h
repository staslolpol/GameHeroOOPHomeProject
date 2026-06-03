#include "logic.h"

class player {
private:

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

public:

	int number_of_skills = NUMBER_OF_SKILLS;

	player();
		// default constructor

	//canonical constructor
	player(int level, int age, int st_p, int state_stamina, int state_agility, int st_i,
		int free_state_point, string name_player, string classes, string guild_name, string title, string skills);

	player(const player& player);
		//Copy constract
	

	~player();

	//get
	string get_name_player();
	string get_title();
	string get_guild_name();
	string get_classes();
	string* get_skills();

	int get_age();
	int get_level();
	int get_state_power();
	int get_state_stamina();
	int get_state_agility();
	int get_state_intelligence();
	int get_free_state_point();

	//set
	void set_name_player(string name);
	void set_title(string title);
	void set_guild_name(string guild_name);
	void set_classes(string classes);
	void set_skills(string* skills, int size);

	void set_age(int age);
	void set_level(int level);
	void set_state_power(int state_power);
	void set_state_stamina(int state_stamina);
	void set_state_agility(int st_agility);
	void set_state_intelligence(int state_intelligence);
	void set_free_state_point(int free_state_point);


	string toString();

};