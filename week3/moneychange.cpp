#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int coins = 0;

	
	if(n>=10){
		coins = n/10;
		n=n%10;
	}
	
	if(n>=5){
		coins += n/5;
		n = n%5;
	}
	
	cout<<coins+n;
	
	return 0;
}
