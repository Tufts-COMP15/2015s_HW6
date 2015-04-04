#include <iostream>
#include "BogValidator.h"
using namespace std;

#include "BogValidator.h"

int main()
{
	BogValidator v;

	v.readDict();
	v.readBoard();
	v.checkWords();
	return 0;
}
