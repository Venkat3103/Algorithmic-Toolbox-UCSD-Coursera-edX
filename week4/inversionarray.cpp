#include<iostream> 
#include <bits/stdc++.h> 
using namespace std; 

int Inversion(int arr[], int n) 
{ 
	int count = 0; 
	for (int i = 0; i < n - 1; i++) 
		for (int j = i + 1; j < n; j++) 
			if (arr[i] > arr[j]) 
				count++; 

	return count; 
} 

int main() 
{ 
	int n = 0;
	cin>>n;
	int arr[n] = {0};
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}		
	cout<< Inversion(arr, n); 
	return 0; 
} 

