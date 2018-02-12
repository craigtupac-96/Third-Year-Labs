#pragma once
#include "Candidate.h"
#include "BallotPaper.h"
#include <vector>

class VoteCounter {
public:
	std::map<Candidate*, int> countMap;
	int remaining;

	VoteCounter();

	VoteCounter(std::vector<Candidate> *candidate, std::vector<BallotPaper>*ballot);

	void makeCandiMap(std::vector<Candidate> *candidate);

	void resetCount();

	void roundCount(std::vector<BallotPaper> *ballot);

	void eliminate(std::vector<BallotPaper> *ballot, int round);

	void nextPref(std::vector<BallotPaper> *ballot, std::string name);

	void winnerCheck(std::vector<BallotPaper> *ballot);
};