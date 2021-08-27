#include<iostream>
using namespace std;

int SCN(int a[], int b[], int c[], int size)
{
	
	int j = 0;
	int k = 0;
	int l = 0;
	int Smallest_num = 0;
	while (j < size && k < size && l < size)
	{
		if (a[j] < b[k] && a[j] < c[l])
		{
			j++;

		}
		else if (b[k] < a[j] && b[k] < c[l])
		{
			k++;

		}
		else if (c[l] < b[k] && c[l] < a[j])
		{
			l++;

		}
		if (a[j] == b[k] && a[j] == c[l])
		{
			Smallest_num = a[j];
			break;
		}
	}
	return Smallest_num;
}
int main()
{
	int size = 5;
	int scn = 0;
	int arr1[] = { 1,2,9,23,55 };
	int arr2[] = { 5,7,55,57,77 };
	int arr3[] = { 22,55,78,99 };
	scn = SCN(arr1, arr2, arr3,size);
	cout << "The least common number in the 3 array is " << scn << endl;
	system("PAUSE");

}