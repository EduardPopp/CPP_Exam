// Cpp_testing_exam.cpp: Definiert den Einstiegspunkt für die Anwendung.
//

#include "Cpp_testing_exam.h"

using namespace std;

int main(int ac, char* av[])
{
	ifstream file;

	if (ac > 1) {
		for (int i = 1; i < ac; i++) {
			cout << av[i] << ": " << endl;
			file.open(av[i]);
			if (!file || !file.is_open()) {
				cerr << av[i] << ": No such file or directory" << endl;
			}
			else {
				string line;
				while (getline(file, line)) {
					cout << line << endl;
				}
			}
			file.close();
		}
	} else {
		cerr << "Usage: ./Cpp_testing_exam file [...]" << endl;
	}
	return 0;
}
