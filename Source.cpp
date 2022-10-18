#include <iostream>
#include "Header.h"

using namespace std;

void main() {
	string Inp = "-";
	while (Inp != "0") {
		cout << "Type what do you need!" << endl;
		cout << "1 - TheMassiv7" << endl;
		cout << "2 - TheMassiv15" << endl;
		cout << "3 - TheMassiv27" << endl;
		cout << "4 - TheMassiv37" << endl;
		cout << "-> ";
		cin >> Inp;
		if (Inp == "1") {
			TheMassiv7();
		}
		else if (Inp == "2"){
			TheMassiv15();
		}
		else if (Inp == "3") {
			TheMassiv27();
		}
		else if (Inp == "4") {
			TheMassiv37();
		}
		else if (Inp != "0") {
			cout << "Error! Try again!" << endl;
			system("cls");
		}
	}
}