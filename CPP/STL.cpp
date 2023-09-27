#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int arr[] = {3, 5, 1, 2, 4};

	// Sort the array in ascending order
	
cout<<"Unsorted array"<<endl;
for (int i : arr)
	{
		cout << i << " ";
	}
	// Print the sorted array
	cout<<endl<<"Sorted array"<<endl;
	sort(begin(arr), end(arr));
	for (int i : arr)
	{
		cout << i << " ";
	}
    
	

	return 0;
}
