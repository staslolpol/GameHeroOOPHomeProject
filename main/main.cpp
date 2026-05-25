#include "player.h"

int main() {
	player player_1;
	
	cout << "------create new player------" << endl;

	cout << "Input name of player: ";
	cin >> player_1.name_player;

	cout << "Input player title: ";
	cin >> player_1.title;

	cout << "Input age of character: ";
	cin >> player_1.age;

	cout << "Input name guild with player: ";
	cin >> player_1.guild_name;

	cout << "Input level of player: ";
	cin >> player_1.level;

	cout << "Input class of player: ";
	cin >> player_1.classes;

	cout << "Sum of all state not more your level * 3" << endl;

	cout << "Input how mant point in state power of player: ";
	cin >> player_1.state_power;

	cout << "Input how mant point in state stamina of player: ";
	cin >> player_1.state_stamina;

	cout << "Input how mant point in state agility of player: ";
	cin >> player_1.state_agility;

	cout << "Input how mant point in state intelligence of player: ";
	cin >> player_1.state_intelligence;

	player_1.free_state_point = (player_1.level * 3) - (player_1.state_agility + player_1.state_intelligence
		+ player_1.state_power + player_1.state_stamina);

	for (int i = 0; i < NUMBER_OF_SKILLS; i++)
	{
		Cout << "Input skill number " << i << ": ";
		cin >> player_1.skills[i];
	}

	cout << "--------------------------------------------------------------------------------------------------";
	
	cout << "\nInfo about your player account:" << endl;

	cout << player_1.toString();

	return 0;
}