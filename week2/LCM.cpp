//completed

#include<iostream>
using namespace std;

unsigned long int EuclidGCD(unsigned long int a,unsigned long int b){
	if(b==0){
		return a;
	}
	
	unsigned long int r = a%b;
	return EuclidGCD(b,r);
}

int main(){
	unsigned long int a,b;
	cin>>a>>b;
	unsigned long int gcd = a>b?EuclidGCD(a,b):EuclidGCD(b,a);
	
	cout<<(a/gcd)*b;
	
	return 0;
}
