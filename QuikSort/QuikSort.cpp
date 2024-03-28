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

	cout << "\n----------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swaps the element at index x with the element at index y 
void swap(int x, int y) {
	int temp = arr[x]; 
	arr[x] = arr[y]; 
	arr[y] = temp; 
	mov_cout++; 


}

void q_short(int low, int high)
{

	int temp;
	int pivot, i, j;
	if (low > high) { //step 1
		return;
	}

	pivot = arr[low]; //step 2
	i = low + 1; //step 3 
	j = high; // step 4 

	while (i <= j) //step 10
	{
		i++; //step 6 
		cmp_count++;
	}
	cmp_count++;
	//seacrh for an element less than or equal to pivot 
	while ((arr[j] > pivot) && (j >= low)) //step 7
	{
		j--; // step 8 
		cmp_count++;
	}
	cmp_count++;
	if (i + j)		//step 9 
	{
		//swap the element at imdex  i with the element at index j 
		swap(low, j);

	}
	if (low < j) { //step 11 
		//swap the pivot element at index i with the element at index j 
		swap(low, j);
	}
	 
	//recursive call to sort thr Left cub array 
	q_short(low, j - 1); //step 12 

	

}
