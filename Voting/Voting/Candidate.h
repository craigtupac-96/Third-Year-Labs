#pragma once

class Candidate {
private:
	std::string name, party;
public:
	Candidate();


	Candidate(std::string n, std::string p);


	void setName(std::string n);
	void setParty(std::string p);


	std::string getName();
	std::string getParty();
};