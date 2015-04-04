#ifndef BOGSOLV_H
#define BOGSOLV_H

#include "BogWordList.h"
#include "Dictionary.h"
#include <vector>

//
// A class to solve boggle puzzles
//  The class reads in a dictionary and a board
//  Then solves it.
//  Once it has solved it, the solver can be
//  asked for the words it found, can be asked to print the words
//  with their locations, and to print the words just as strings
//

class BogSolver
{
    public:
	BogSolver();
	~BogSolver();
	bool readDict();
	bool readBoard();
	bool solve();		// search board for words in dict
	int  numWords();		// returns number of words found
	int  numWords(int len);	// number of words of length len
	BogWordList* getWords();	 // returns all words found
	BogWordList* getWords(int len);	// returns words of len len
	void printWords();		// print all words in HBF
	void printWords(int len);	// print len-length words in HBF
	void listWords();		// print just the text, no coords
	void listWords(int len);	// just the text, no coords
	void printBoard();
	bool readDict(std::string filename);
	bool readBoard(std::string filename);

   private:
	Dictionary dict;	 // must use a Dictionary
	int rows; // the size of the board
	int cols;
	vector<vector<char> >bogBoard; // a vector of vectors, 2D
	BogWordList bwl;
	void addLetterToLastWord(BogLett bl);
	void removeLetterFromLastWord();
	void solve(int row, int col, std::string prefix,BogWord bw);
};
#endif
