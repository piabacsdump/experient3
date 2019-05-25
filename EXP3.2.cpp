#include <iostream>
using namespace std;

int main()
{
	double tempA[7], tempB[7], tempC[7];
	cout << "Enter all temperature for a week of Province A, Province B and then Province C.\n";
	for(int i=0; i<7; i++)
	{
		cout << "Province A, Day " << i+1 << ": ";
		cin >> tempA[i];
	}
	for(int i=0; i<7; i++)
	{
		cout << "Province B, Day " << i+1 << ": ";
		cin >> tempB[i];
	}
	for(int i=0; i<7; i++)
	{
		cout << "Province C, Day " << i+1 << ": ";
		cin >> tempC[i];
	}
	cout << "\n\nDisplaying Values.\n";
	for(int i=0; i<7; i++)
	{
		cout << "Province A, Day " << i+1 << "=";
		cout << tempA[i] << endl;
	}
	for(int i=0; i<7; i++)
	{
		cout << "Province B, Day " << i+1 << "=";
		cout << tempB[i] << endl;
	}
	for(int i=0; i<7; i++)
	{
		cout << "Province C, Day " << i+1 << "=";
		cout << tempC[i] << endl;
	}
}
