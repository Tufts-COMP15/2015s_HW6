#include "BogWordList.h"
#include "Dictionary.h"
#include "BogSolver.h"

#include <iostream>

using namespace std;

int main()
{
	BogSolver solver;

	solver.readDict();
	solver.readBoard();
	cout << "About to solve...\n";
	solver.solve();
	solver.printWords();
	cout << "Done!\n";
	return 0;
}

