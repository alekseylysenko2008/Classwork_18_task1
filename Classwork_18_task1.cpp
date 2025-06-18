#include <iostream>
#include "computer.h"
int main()
{
	int n = 5;
	computer* arr = new computer[n]{
		{"Asus", 8, 15'000},
		{"Lenovo", 6, 14'000},
		{"Dell", 8, 16'000},
		{"Acer", 8, 17'000},
		{"HP", 4, 10'000},

	};
	cout << "Computer with RAM > 10\n";
	for (int i = 0; i < n; i++)
	{
		if (arr[i].ram > 10) {
			cout << arr[i].name << endl;
		}
	}
}
