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
	player(int lv, int ag, int st_p, int st_s, int st_a, int st_i,
		int fr_st, string nm, string cls, string gld_nm, string tl, string skl);

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
	void set_name_player(string nm);
	void set_title(string tl);
	void set_guild_name(string gld_nm);
	void set_classes(string cls);
	void set_skills(string* skl, int size);

	void set_age(int ag);
	void set_level(int lv);
	void set_state_power(int st_p);
	void set_state_stamina(int st_s);
	void set_state_agility(int st_a);
	void set_state_intelligence(int st_i);
	void set_free_state_point(int fr_st);


	string toString();

};