#include <sstream>
#include <iostream>
#include <string>
#include "libtest.h"

using namespace std;

int main(void) {

	string exampleString = "Hello World, This is Philip\n";
	string exampleString_02 = "2023. 05. 25. Hello World, This is Philip from 1996\n";

	//01 Initialize stringstream object
	stringstream ss_01;
	ss_01.str(exampleString);

	stringstream ss_02(exampleString_02);

	//02 Hand in contents from stringstream object
	Div("02.01");
	Test("Hand in to Integer type");
	int i = 0;
	ss_02 >> i;
	cout << i << endl;
	Report("If Value Exist in first place, it applies");

	Div("02.02");
	Test("Reload Integertype with already used stream");
	char j = 0;
	while (ss_02 >> j) {
		cout << j;
	}
	Report("First 2023 has been removed from sstream object");

	Div("02.03");
	Test("Check if stringstream object has contents");
	char k;
	while (ss_02 >> k) {
		cout << k;
	}
	Report("No character to push into k.");

	//03 Check internal string object in stringstream object
	Div("03");
	cout << ss_01.str() << endl;
	cout << ss_02.str() << endl;

	//04 Use stringstream with delimiter
	Div("04.01");
	Test("Default delimiter");
	stringstream ss_04("1 2 3");
	string l;
	while (ss_04 >> l)
		cout << "Get : " << l << endl;

	Div("04.02");
	Test("Custom delimiter");
	stringstream ss_05("1,2,3");
	string m;
	while (getline(ss_05, m, ',')) {
		cout << "Get : " << m << endl;
	}

	return 0;
}