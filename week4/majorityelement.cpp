#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<bits/stdc++.h> 
using namespace std;

int main(){
	
	long long n=0,i=0;
	cin>>n;
	long long a[n] = {0};
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	
	long long count = 1;
	for(i=0;i<n-1;i++){
		if(a[i+1]==a[i]){
			++count;
		}
		else{
			if(count>n/2){
				cout<<"1";
				return 0;
			}
			count = 1;
		}
	}
		if(count>n/2){
				cout<<"1";
				return 0;
			}
		else cout<<"0";
	
	return 0;
}
