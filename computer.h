#pragma once
#include <iostream>
using namespace std;
struct computer{
	char name[100];
	int ram = 0;
	float price = 0;

	void showinfo() {
		cout << "name: " << name << endl;
		cout << "ram: " << ram << endl;
		cout << "price: " << price << endl;
}
};