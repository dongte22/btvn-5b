// btvn 5b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int b;
	double test; // nghiệm
	cout << " Provide a: ";
	cin >> a;
	cout << " Provide b: ";
	cin >> b;

	if (a == 0) {
		if (b == 0) {
			cout << " Infinitely many soltion " << endl; // phương trình vô số nghiêm
		}
		else {
			cout << " Method inexperienced " << endl; // phương trình vô nghiêm
		}
	}
	else {
		test = (double)-b / a;
		cout << " The equation that has a solution is: " << test << endl; // phương trình có nghiệm
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
