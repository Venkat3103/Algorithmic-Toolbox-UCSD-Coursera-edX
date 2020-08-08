//completed

//Program to fin the unit digit of a large fibonacci number
#include<iostream>
using namespace std;

unsigned long long int genFib(int n){
	//cout<<"array created "<<n<<endl;
	unsigned long long int arr[n+1] = {0};
	arr[0]=0;
	arr[1]=1;
	
	//cout<<arr[0]<<endl;
	//cout<<arr[1]<<endl;
	
	for(unsigned long long int i=2;i<=n;++i){
		arr[i] = ((arr[i-2]%10)+(arr[i-1]%10))%10;
		
		//cout<<i<<" : "<<arr[i]<<endl;
	}
	
	return arr[n];
}

int main(){
	unsigned long long int n;
	cin>>n;
	unsigned long long int nth = genFib(n);
	
	cout<<nth;
	return 0;
}
