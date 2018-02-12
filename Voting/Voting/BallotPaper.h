#pragma once
#include "Candidate.h"
#include <map>
#include <vector>


class BallotPaper {

public:
	std::map<Candidate*, int> prefMap;

	BallotPaper();


	BallotPaper(std::vector<Candidate>*candidate, std::string prefs);


	void setPreference(Candidate *cand, int pref);


	Candidate getPreference(int n);
};
