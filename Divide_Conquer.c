// C++ code to demonstrate Divide and
// Conquer Algorithm#include<iostream>
# include<iostream>
using namespace std;

// function to find the maximum no.
// in a given array.
int DAC_Max(int arr[], int index, int l)
{
	int max;
	if(l - 1 == 0)
	{
	return arr[index];
	}
	if(index >= l - 2)
	{
		if(arr[index] > arr[index + 1])
		return arr[index];
		else
		return arr[index + 1];
	}
	max = DAC_Max(arr, index + 1, l);	
	if(arr[index] > max)
	return arr[index];
	else
	return max;
}

// Function to find the minimum no.
// in a given array
int DAC_Min(int arr[], int index, int l)
{
	int min;
	if(l - 1 == 0)
	{
	return arr[index];
	}
	if(index >= l - 2)
	{
		if(arr[index] < arr[index + 1])
		return arr[index];
		else
		return arr[index + 1];
	}
	
	min = DAC_Min(arr, index + 1, l);
	if(arr[index] < min)
	return arr[index];
	else
	return min;
}

// Driver code
int main()
{
	int arr[] = {120, 34, 54, 32, 58, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max, min;
	max = DAC_Max(arr, 0, n);
	min = DAC_Min(arr, 0, n);
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;
	return 0;
}

// This code is contributed by probinsah.
