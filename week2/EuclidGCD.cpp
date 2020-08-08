//completed

#include<iostream>
using namespace std;

long int EuclidGCD(long int a,long int b){
	if(b==0){
		return a;
	}
	
	long int r = a%b;
	return EuclidGCD(b,r);
}

int main(){
	long int a,b;
	cin>>a>>b;
	long int gcd = a>b?EuclidGCD(a,b):EuclidGCD(b,a);
	
	cout<<gcd;
	
	return 0;
}
