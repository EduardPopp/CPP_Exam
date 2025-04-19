#include "task3.hpp"


string toLower(string str) {
	transform(str.begin(), str.end(), str.begin(),[](unsigned char c) { 
			return tolower(c); 
	});
	return str;
}

SickKoala::SickKoala(string KoalaName)
{
	this->_Name = KoalaName;
}

SickKoala::~SickKoala()
{
	cout << "Mr." << this->_Name << ": Kreooogg!! I'm cured!!" << endl;
}

void SickKoala::poke()
{
	cout << "Mr." << this->_Name << ":Gooeeeeerrk!!" << endl;
}

bool SickKoala::takeDrug(string drug)
{
	
	if (toLower(drug) == "mars") {
		cout << "Mr." << this->_Name << ": Mars and it kreogs!" << endl;
		return true;
	}
	else if (drug == "Buronzand") {
		cout << "Mr." << this->_Name << ": And you'll sleep right away!" << endl;
		return true;
	}
	else {
		cout << "Mr." << this->_Name << ": Goerkreog!" << endl;
		return false;
	}
}

void SickKoala::overdrive(string fever)
{
	string replace = "1337!";
	string old = "kreog!";
	string lowercase = toLower(fever);

	size_t pos = 0;
	while ((pos = lowercase.find(old, pos)) != std::string::npos) {
		lowercase.replace(pos, old.length(), replace);
		pos += replace.length();  // Weiter nach dem ersetzten Teil suchen
	}
	cout << "Mr." << this->_Name << ": " << lowercase << endl;
}
