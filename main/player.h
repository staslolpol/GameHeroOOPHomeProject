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


	string toString();


		return msg;
	}

};