#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		if (arr[mid] == x) 
			return mid; 

		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 
 
		return binarySearch(arr, mid + 1, r, x); 
	} 
 
	return -1; 
} 

int main(void) 
{ 	int n;
	cin>>n;
	int arr[n] = {0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int k = 0,x=0;
	cin>>k;
	
	for(int i=0;i<k;i++){
		cin>>x;
		int index = binarySearch(arr, 0, n - 1, x); 
		cout << index;
		
		if(i!=k-1){
			cout<<" ";
		} 
	}
	
	return 0; 
} 

