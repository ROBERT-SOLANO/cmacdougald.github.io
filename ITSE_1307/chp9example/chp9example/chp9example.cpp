// chp9example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct characterClassType {
	string name;
	string description;
	double experiencemultiplier;
	double speed;
};

struct characterType {
	string name;
	int level;
	double experiencepercent;
	int experiencepoints;
	int health;
	int magic;
	characterClassType specialization;
};


struct boxType {
	int length;
	int width;
	int height;
};

struct addressType {
	string street_one;
	string street_two;
	string locality;
	string region;
	string postal_code;
	string country;
};

void printAddress(addressType & sctAddressToPrint) {
	cout << sctAddressToPrint.street_one << endl
		<< sctAddressToPrint.street_two << endl
		<< sctAddressToPrint.locality << ", "
		<< sctAddressToPrint.region << ", "
		<< sctAddressToPrint.postal_code << endl
		<< sctAddressToPrint.country << endl;
}

void inputBox(boxType & sctBox) {
	cout << "Enter a length: ";
	cin >> sctBox.length;
	cout << "Enter a width: ";
	cin >> sctBox.width;
	cout << "Enter a height: ";
	cin >> sctBox.height;
}

int calculateVolume(boxType & sctBox) {
	return sctBox.length * sctBox.width * sctBox.height;
}

void printBox(boxType & sctBox) {
	cout << "L" << sctBox.length << "xW" << sctBox.width << "xH" << sctBox.height << endl;
	cout << "Volume: " << calculateVolume(sctBox) << endl;
}



int main()
{
	addressType sctAddressOne;
	boxType sctBoxOne;
	characterType sctBob;

	sctAddressOne.country = "USA";
	sctAddressOne.locality = "San Antonio";
	sctAddressOne.region = "Texas";
	sctAddressOne.postal_code = "78251";
	sctAddressOne.street_one = "Northwest Vista College";
	sctAddressOne.street_two = "MLH 210";

	printAddress(sctAddressOne);

	inputBox(sctBoxOne);
	printBox(sctBoxOne);

	sctBob.name = "Bob";
	sctBob.specialization.name = "Druid";
	sctBob.specialization.description = "Neature Dude!";
	sctBob.specialization.speed = 3.5;
	sctBob.specialization.experiencemultiplier = 5.0;


    return 0;
}

