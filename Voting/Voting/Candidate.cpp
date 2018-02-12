#include "stdafx.h"
#include <string>
#include "Candidate.h"
using namespace std;


Candidate::Candidate() {

}


Candidate::Candidate(string n, string p) {
	setName(n);
	setParty(p);
}


void Candidate::setName(string n) {
	name = n;
}


void Candidate::setParty(string p) {
	party = p;
}


string Candidate::getName() {
	return name;
}


string Candidate::getParty() {
	return party;
}