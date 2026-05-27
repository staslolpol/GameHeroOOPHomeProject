#include "goblin.h"


int main() {
	player player_1;

	int number_of_skills = NUMBER_OF_SKILLS;

	string name = "";
	string title = "";
	string guild_name = "";
	string classes = "";
	string* skills = new string[number_of_skills]{ "" };

	int age = 0;
	int level = 0;
	int state_power = 0;
	int state_stamina = 0;
	int state_agility = 0;
	int state_intelligence = 0;
	int free_state_point = 0;


	cout << "------create new player------" << endl;

	cout << "Input name of player: ";
	cin >> name;
	player_1.set_name_player(name);

	cout << "Input player title: ";
	cin >> title;
	player_1.set_title(title);

	cout << "Input age of character: ";
	cin >> age;
	player_1.set_age(age);

	cout << "Input name guild with player: ";
	cin >> guild_name;
	player_1.set_guild_name(guild_name);

	cout << "Input level of player: ";
	cin >> level;
	player_1.set_level(level);

	cout << "Input class of player: ";
	cin >> classes;
	player_1.set_classes(classes);

	cout << "Sum of all state not more " << level * 3 << endl;

	cout << "Input how mant point in state power of player: ";
	cin >> state_power;
	player_1.set_state_power(state_power);

	cout << "Input how mant point in state stamina of player: ";
	cin >> state_stamina;
	player_1.set_state_stamina(state_stamina);

	cout << "Input how mant point in state agility of player: ";
	cin >> state_agility;
	player_1.set_state_agility(state_agility);

	cout << "Input how mant point in state intelligence of player: ";
	cin >> state_intelligence;
	player_1.set_state_intelligence(state_intelligence);

	free_state_point = (level * 3) - (state_agility + state_intelligence
		+ state_power + state_stamina);
	player_1.set_free_state_point(free_state_point);

	for (int i = 0; i < number_of_skills; i++)
	{
		cout << "Input skill number " << i + 1 << ": ";
		cin >> skills[i];
	}
	player_1.set_skills(skills, number_of_skills);


	cout << "--------------------------------------------------------------------------------------------------";

	cout << "\nInfo about your player account:" << endl;

	cout << player_1.toString();

	cout << "--------------------------------------------------------------------------------------------------";
	cout << "Please press Enter.";

	//system("pause");

	system("cls");

	goblin goblin_1;
	int level_goblin = goblin_1.get_random_level_gobline(level);

	cout << "You met a goblin!\nGoblin is level " << level_goblin << endl;

	if (goblin_1.is_live(level_goblin, level)) {
		cout << "YOU LOSE !!!!";
		return -1;
	}
	cout << "YOU WIN!!!\n YOU GET LEVEL UP!!!";

	level += 1;

	cout << "YOUR LEVEL: " << level;

	delete[] skills;

	return 0;
}
