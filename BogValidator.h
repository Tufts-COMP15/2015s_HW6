#ifndef BOGVALIDATOR_H
#define BOGVALIDATOR_H

#include "Dictionary.h"

class BogValidator
{
public:
	BogValidator(); // constructor
	~BogValidator(); // destructor
	bool readDict(); // read in a dictionary
	bool readBoard(); // read in a board
	bool isValid(std::string s); // validates one word
	void checkWords(); // validates cin. The end of input will
			   // simply return NULL to cin.
private:
	Dictionary dict; // must use a Dictionary
};

#endif

