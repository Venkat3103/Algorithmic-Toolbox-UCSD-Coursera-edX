#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 

void partition(int a[], int l, int r, int &i, int &j) 
{ 
	i = l-1, j = r; 
	int p = l-1, q = r; 
	int pivot = a[r]; 

	while (true) 
	{ 
		while (a[++i] < pivot); 

		while (pivot < a[--j]) 
			if (j == l) 
				break; 

		if (i >= j) break; 

		swap(a[i], a[j]); 

		if (a[i] == pivot) 
		{ 
			p++; 
			swap(a[p], a[i]); 
		} 

		if (a[j] == pivot) 
		{ 
			q--; 
			swap(a[j], a[q]); 
		} 
	} 

	swap(a[i], a[r]); 

	j = i-1; 
	for (int k = l; k < p; k++, j--) 
		swap(a[k], a[j]); 

	i = i+1; 
	for (int k = r-1; k > q; k--, i++) 
		swap(a[i], a[k]); 
} 

void quicksort(int a[], int l, int r) 
{ 
	if (r <= l){
		return; 
	} 
		

	int i, j; 

	partition(a, l, r, i, j); 
 
	quicksort(a, l, j); 
	quicksort(a, i, r); 
} 

 

int main() 
{ 
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	quicksort(a, 0, n-1);
	
	for (int i = 0; i < n; ++i){
		cout<<a[i]; 
		if(i!=n-1){
			cout<<" ";
		}
	}
		
	   
	return 0; 
} 

