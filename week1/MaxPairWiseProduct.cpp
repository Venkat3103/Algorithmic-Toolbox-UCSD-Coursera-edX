//completed

#include<iostream>
using namespace std;

int main(){
	unsigned long int n,i,num,max=0,smax=0;
	cin>>n;
	
	
	
	
	for(i=0;i<n;i++){
		cin>>num;
		if(num>max){
			smax = max;
			max = num;
		}
		else if(num>smax){
			smax = num;
		}
	}
	
	cout<<smax*max;
	
	return 0;
}
