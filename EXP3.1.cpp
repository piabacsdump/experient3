#include <iostream>
using namespace std;

int main()
{
	float num[10], ave=0, tot=0, min, max;
	cout << "Enter 10 numbers:\n";
	for(int i=0; i<10; i++)
		cin >> num[i];
	max = num[0];
	for(int i=0; i<10; i++){
		if(num[i]>max)
			max = num[i];
	}
	min = num[0];
	for(int i=0; i<10; i++){
		if(num[i]<min)
			min = num[i];
	}
	for(int i=0; i<10; i++)
		tot = tot + num[i];
	ave = tot/10;
	cout << "Smallest: " << min << endl;
	cout << "Largest: " << max << endl;
	cout << "Total: " << tot << endl;
	cout << "Average: " << ave << endl;
}
