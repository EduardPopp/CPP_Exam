#ifndef TASK4_HPP_
#define TASK4_HPP_

#include "task3.hpp"

using namespace std;

class KoalaNurse {
public:
	// constructor and destructor
	KoalaNurse(int NurseID);
	~KoalaNurse();
	void giveDrug(string drug, SickKoala &Koala);
	string readReport(string reportfile);
	void timeCheck();
	void setCheckIn(int checkIn);

private:
	int _checkedIn = 0;
	int _NurseID = 0;

};

#endif // !TASK4_HPP_
