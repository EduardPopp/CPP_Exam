#ifndef TASK3_HPP_
#define TASK3_HPP_

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

class SickKoala {
public:
	// constructor and destructor
	SickKoala(string KoalaName);
	~SickKoala();
	void poke();
	bool takeDrug(string drug);
	void overdrive(string fever);

	string _Name = "";

};

#endif // !TASK3_HPP_
