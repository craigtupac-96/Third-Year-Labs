#include "stdafx.h"
#include <string>
#include <iostream>
#include "BallotPaper.h"
using namespace std;

BallotPaper::BallotPaper() {

}

BallotPaper::BallotPaper(vector<Candidate> *candidate, string prefs) {
	int preference;
	vector<Candidate>::iterator it = candidate->begin();
	int i = 1;
	for (it; it != candidate->end(); i++, ++it) { 
		preference = (int)prefs.at(i) - '0';
		setPreference(it.operator->(), preference);
	}
}


void BallotPaper::setPreference(Candidate *cand, int pref) {
	pair<Candidate*,int> candPref = make_pair(cand, pref);
	prefMap.insert(candPref);
}


Candidate BallotPaper::getPreference(int n) {
	Candidate theCand;
	for (map<Candidate*, int>::iterator it = prefMap.begin(); it != prefMap.end(); ++it) {
		if (it->second == n) {
			theCand = *it->first;
		}
	}
	return theCand;
}