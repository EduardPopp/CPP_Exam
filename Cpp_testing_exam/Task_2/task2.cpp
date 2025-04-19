// Cpp_testing_exam.cpp: Definiert den Einstiegspunkt für die Anwendung.
//

#include "task2.h"

using namespace std;

float convertTemperature(float Temperature, string Scale) {
	float result = 0.0;

	if (Scale == "Fahrenheit") {
		result = 5.0 / 9.0 * (Temperature - 32);
	}
	else if (Scale == "Celsius") {
		result = Temperature * 9.0 / 5.0 + 32;
		//F = 
	}
	return result;
}


int main()
{
	float conversedValue = 0.0;
	float temperatureValue = 0.0;
	string temperatureScale = "";
	string input = "";


	while (input != "Ende") {
		getline(cin, input);

		stringstream iss(input);
		iss >> temperatureValue >> temperatureScale;

		conversedValue = convertTemperature(temperatureValue, temperatureScale);

		if (temperatureScale == "Fahrenheit") {
			cout << right << setw(10) << fixed << setprecision(3) << conversedValue << "\t\t\t" << setw(10) << "Celsius" << endl;
		}
		else if (temperatureScale == "Celsius") {
			cout << right << setw(10) << fixed << setprecision(3) << conversedValue << "\t\t\t" << setw(10) << "Fahrenheit" << endl;
		}
		else {
			cerr << "Invalid temperature unit. Use 'Celsius' or 'Fahrenheit'." << endl;
			return -1; // Error code
		}
	}
	return 0;
}
