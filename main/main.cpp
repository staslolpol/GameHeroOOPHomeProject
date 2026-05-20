#include "player.h"

int main() {
	player player_1;

	cout << "Input name of player: ";
	cin >> player_1.name_player;

	cout << "Input player title: ";
	cin >> player_1.title;

	cout << "Input age of character: ";
	cin >> player_1.age;

	cout << "Input level of player: ";
	cin >> player_1.level;

	

	cout << "\nInfo about your player account:" << endl;

	

	cout << "\nInfo about your player account:" << endl;

	cout << player_1.toString();

	return 0;
}