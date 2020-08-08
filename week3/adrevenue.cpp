#include<iostream>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	long long p[n] = {0};
	long long c[n]= {0};
	
	int i=0;
	long long max = 0;
	
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	
	for(i=0;i<n;i++){
		cin>>c[i];
	}
	
	sort(p,p+n,greater<long long>());
	sort(c,c+n,greater<long long>());
	
	for(i=0;i<n;i++){
		
		
		max+=((long long)p[i]*c[i]);
	}  
	
	
	
	cout<<fixed<<setprecision(0)<<max;
	
	return 0;
}
