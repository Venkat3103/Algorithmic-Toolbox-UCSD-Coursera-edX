#include<iostream>
using namespace std;

long long pisanoperiod(long long m){
	long long a = 0,b=1,c=a+b;
	for(long long i=0;i<m*m;i++){
		c=(a+b)%m;
		a=b;
		b=c;
		if(a==0&&b==1){
			return i+1;
		}
	}
	
}

int main(){
	long long n=0,m=0;
	cin>>n>>m;
	
	long long pp = pisanoperiod(m);
	
	long long newf = n%pp;
	
	long long f = 0;
	long long s = 1;
	long long temp =newf;
	
	for(long long i=1;i<newf;i++){
		temp = (f+s)%m;
		f = s;
		s = temp;
	}
	
	cout<<temp%m;
	
	return 0;
	
	
}
