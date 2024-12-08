//============================================================================
// Name        : csc450_m1ct.cpp
// Author      : FM
// Version     :
// Copyright   : Your copyright notice
// Description : Prints information about a fictional person
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string first_name = "Taylor";
	string last_name = "Morgan";
	string street_address = "123 Elm Street";
	string city = "Springfield, IL";
	string zip_code = "62704"; // storing as string since no need for numerical operations

	cout << first_name + " " + last_name << endl;
	cout << street_address << endl;
	cout << city + " " + zip_code << endl;

	return 0;
}
