#include "enemi.h"
#pragma once
class enemi
{
private:
	enemi** all_enemi;
	int quantity;

public:
	//default constructor

	enemi() : enemi(nullptr, 0) {

	}

	//constructor with arguments

	enemi(enemi** all_enemi, int quantity) {
		this->quantity = quantity;
		if (quantity < 0) {
			this->all_enemi = nullptr;
			this->quantity = 0;
		}
		else {
			this->all_enemi = new enemi * [quantity];
			for (int i = 0; i < quantity; i++) {
				this->all_enemi[i] = new enemi(*all_enemi[i]);
			}
		}
	}

	//copy constructor

	enemi(const enemi& enemi) {
		quantity = enemi.quantity;

		if (quantity < 0) {
			all_enemi = nullptr;
		}
		else {
			all_enemi = new enemi * [quantity];
			for (int i = 0; i < quantity; i++) {
				
			}
		}
	}

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


