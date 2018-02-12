#include "stdafx.h"
#include <string>
#include <map>
#include <iostream>
#include "VoteCounter.h"
using namespace std;

VoteCounter::VoteCounter() {

}

VoteCounter::VoteCounter(vector<Candidate> *candidate, vector<BallotPaper> *ballot ) {
	remaining = (int)candidate->size();
	makeCandiMap(candidate); // might need to be in loop
	for (int i = 0; i < candidate->size(); i++) {
		if (remaining == 1) {
			break;
		}
		roundCount(ballot);
		eliminate(ballot, i+1);
		//// test print
		//for (map<Candidate*, int>::iterator it = countMap.begin(); it != countMap.end(); ++it) {
		//	cout << it->first->getName() << ": " << it->second << endl;
		//}
		//cout << endl << endl;
		resetCount();
	}
	winnerCheck(ballot);
}

void VoteCounter::makeCandiMap(vector<Candidate> *candidate) {
	int i = 0;
	for (auto it = candidate->begin(); it != candidate->end(); ++it, i++) {
		pair<Candidate*, int> count = make_pair(&it.operator*(), 0);
		countMap.insert(count);
	}
}

void VoteCounter::resetCount() {

	for (auto i = countMap.begin(); i != countMap.end(); ++i) {
		if (i.operator*().second != -1) {
			i.operator*().second = 0;
		}
	}
}

/*******************************************************************************************/
void VoteCounter::roundCount(vector<BallotPaper> *ballot) {

	for (auto it = ballot->begin(); it != ballot->end(); ++it) {

		for (auto i = countMap.begin(); i != countMap.end(); ++i) {
			if (i.operator->()->first->getName() == it.operator*().getPreference(1).getName() && i.operator*().second != -1) {
				i.operator->()->second++;
			}
		}
	}
}

void VoteCounter::eliminate(vector<BallotPaper> *ballot, int round) {
	int min = (int)ballot->size(); 
	for (auto it = countMap.begin(); it != countMap.end(); ++it) {
		if (it.operator*().second < min && it.operator*().second != -1) {
			min = it.operator*().second;
		}
	}

	for (auto it = countMap.begin(); it != countMap.end(); ++it) {
		if(it.operator*().second == min) {
			cout << "Eliminated after round " << round << ": " << it.operator->()->first->getName() << " - " << it.operator->()->first->getParty() <<  endl;
			//cout << "Votes: " << it.operator->()->second << endl;
			it.operator->()->second = -1;
			nextPref(ballot, it.operator->()->first->getName());
			break;
		}
	}
}

void VoteCounter::nextPref(vector<BallotPaper> *ballot, string name) {
	int prefNumber = 1;
	bool found = false;
	for (auto it = ballot->begin(); it != ballot->end(); ++it) {

		if (it.operator*().getPreference(1).getName() == name ) { 
			for (auto i = countMap.begin(); i != countMap.end(); ++i) { 
				while (!found) {
					if (i.operator->()->first->getName() == it.operator*().getPreference(prefNumber).getName() && i.operator*().second == -1) {
						prefNumber++;
					}
					else {
						found = true;
					}
				}
				if (i.operator->()->first->getName() == it.operator*().getPreference(prefNumber).getName() && i.operator*().second != -1) {
					i.operator->()->second++;
					cout << "Pref: " << prefNumber << endl;
					break;
				}
			}
		}
	}
	remaining--;
}

void VoteCounter::winnerCheck(vector<BallotPaper> *ballot) {
	if (remaining == 1) {
		for (auto it = countMap.begin(); it != countMap.end(); ++it) {
			if (it.operator*().second >= 0) {
				cout << endl << "Winner: " << it.operator*().first->getName() << " - " << it.operator->()->first->getParty() << endl << endl;
			}
		}
	}
}
