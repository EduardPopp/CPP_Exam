#include "task4.hpp"



// int _NurseID = 0;
// int _checkedIn = 0;


KoalaNurse::KoalaNurse(int NurseID)
{
	this->_NurseID = NurseID;
}
KoalaNurse::~KoalaNurse()
{
	cout << "Nurse " << this->_NurseID << ": Finally some rest!" << endl;
}
void KoalaNurse::giveDrug(string drug, SickKoala &Koala)
{
	Koala.takeDrug(drug);
}
string KoalaNurse::readReport(string reportfile)
{
	string Medication = "";
	string KoalaName = "";
	string line = "";
	ifstream file(reportfile);

	size_t pos = reportfile.find('.');

	if (!file) {
		return "";
	}
	else {
		if (pos != std::string::npos) {
			KoalaName = reportfile.substr(0, pos);

			while (std::getline(file, line)) {
				stringstream iss(line);
				iss >> Medication;
			}
			file.close();
			cout << "Nurse " << this->_NurseID << ": Kreog! Mr." << KoalaName << " needs a " << Medication << endl;
			return Medication;
		}
		else {
			KoalaName = "";
			Medication = "";
			return "";
		}
	}

	
}

void KoalaNurse::timeCheck()
{
	if (this->_checkedIn == 0) {
		cout << "Nurse " << this->_NurseID << ": Time to get to work!" << endl;
		setCheckIn(1);
	}
	else {
		cout << "Nurse " << this->_NurseID << ": Time to go home to my eucalyptus forest!" << endl;
		setCheckIn(0);
	}
}

void KoalaNurse::setCheckIn(int checkIn)
{
	this->_checkedIn = checkIn;
}



int main() {
	SickKoala Penis = SickKoala("Penis");
	SickKoala Ginava = SickKoala("Ginava");
	KoalaNurse one = KoalaNurse(1);
	KoalaNurse two = KoalaNurse(2);

	one.timeCheck();
	Penis.poke();
	Ginava.poke();
	one.timeCheck();
	two.timeCheck();
	two.readReport("Penis.report");
	two.readReport("Ginava.report");
	one.timeCheck();
	one.readReport("Moron.report");
	Penis.overdrive("Kreog!, Your Momma sucks dicks! and not only Kreog! Mine ^^");
	Penis.takeDrug(two.readReport("Penis.report"));
	Penis.takeDrug(two.readReport("Moron.report"));
	Ginava.overdrive("Kreog!, You are Kreog! Gay kreog! kroeg!");
	Ginava.takeDrug(one.readReport("Ginava.report"));
	Penis.poke();
	Ginava.poke();
	one.timeCheck();
	two.timeCheck();

	return 0;
}