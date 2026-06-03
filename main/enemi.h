#pragma once
#include "player.h"
class enemi
{
private:
	enemi** all_enemi;
	int quantity;

public:
	//default constructor

	enemi();

	//constructor with arguments

	enemi(enemi** list, int size);

	//copy constructor

	enemi(const enemi& computerRoom);

	//destructor

	~enemi();

	//get

	int get_quantity();

	enemi* getAccount(int quantity);

	//add

	void add_enemi(enemi* quantity);

	//remove

	void remove_enemi(int quantity);

	//output information

	string toString();
};


