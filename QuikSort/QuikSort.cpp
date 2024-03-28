#include <iostream>
using namespace std; 

//array off intergers to hold values 
int arr[20]; 
int cmp_count = 0; //number of comparasion
int mov_cout = 0; // numberof data movements
int n; 

void input() { 
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}


