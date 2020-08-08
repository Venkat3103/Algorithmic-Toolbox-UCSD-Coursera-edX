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

int fibunit(long long n,long long pp){
	
	long long newf = n%pp;
	long long f = 0;
	long long s = 1;
	long long temp =newf;
	
	for(long long i=1;i<newf;i++){
		temp = (f+s)%10;
		f = s;
		s = temp;
	}
	--temp;
	if(temp==-1){
		int x = 9;
		return x;
	}
	else return temp%10;
}

int main(){
	
	long long n=0,m=0;
	cin>>m>>n;
	
	long long pp = pisanoperiod(10);

	
	int nunit = fibunit(n+2,pp);
	int munit = fibunit(m+1,pp);
	
	int unit = nunit - munit;
	
	if(unit>=0){
		cout<<unit;
		return 0;
	}
	
	else cout<<unit+10;

	
	
	return 0;
	
	
}
