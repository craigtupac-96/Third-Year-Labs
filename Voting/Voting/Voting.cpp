/*
Author: Craig Lawlor
C00184465
Description: A program to read in candiates and ballot votes, calculate and eliminate 
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Candidate.h"
#include "BallotPaper.h"
#include "VoteCounter.h"
using namespace std;


vector<Candidate> candi(0);
vector<BallotPaper> ballot(0);


void splitCandidates(string cand) {
	string name = "";
	string party = "";
	bool split = true;
	for (unsigned int i = 1; i < cand.length(); i++) {
		if (cand.at(i) == '+') {
			split = false;
			i++;
		}
		if (split) {
			name += cand.at(i);
		}
		if (!split) {
			party += cand.at(i);
		}
	}
	Candidate tempCand(name, party);
	candi.push_back(tempCand);
}

void splitPreferences(string pref) {
	BallotPaper tempBallot(&candi, pref);
	ballot.push_back(tempBallot);
}

int main()
{
	ifstream myFile;
	myFile.open("votes.txt");
	string line;

	while (getline(myFile, line)) {
		if (line.at(0) == '-') {
			splitCandidates(line);
		}
		if (line.at(0) == '*') {
			splitPreferences(line);
		}
	}

	VoteCounter vCounter(&candi, &ballot);

	system("pause");
	return 0;
}
