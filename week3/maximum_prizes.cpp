#include<iostream>
using namespace std;

int main(){
	long long n = 1;
	cin>>n;
	long long i = 0,j = 0;;
	long long sum = 0;
	int flag = 0;
	
	for(i=1;;i++){
		sum = i*(i+1)/2;
		
		if(sum>n){
			flag = 1;
			break;
		}
		
		else if(sum==n){
			break;
		}
		
	}
	
	if(flag == 0){
		cout<<i<<endl;
		for(j=1;j<=i;j++){
		cout<<j;
		if(j!=i){
			cout<<" ";
		}
		}
	}
	
	else{
		
		
		long long nsum = i*(i-1)/2;
		long long fsum = n-nsum;
		
		cout<<i-1<<endl;
		for(j=1;j<i-1;j++){
			cout<<j<<" ";
		}
		
		cout<<i+fsum-1;
		
		
	}
	
	
	
	
	
	

	
return 0;
}
