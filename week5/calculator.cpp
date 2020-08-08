#include<iostream>
using namespace std;

int main(){
	int n,i=0;
	cin>>n;
	if(n==1){
		cout<<"0"<<endl<<"1";
		return 0;
	}
	int a[n+1] = {0};
	int op[n+1] = {0};
	
	for(i=2;i<=n;i++){
		int temp = i;
		if(temp%6==0){
		    a[i] = min(a[temp/2],a[temp/3]) +1;
			
			op[i] = a[temp/2]<=a[temp/3]?2:3;		
		}
		
		else if(temp%2==0){
		    a[i] = min(a[temp/2],a[temp-1]) +1;
			op[i] = a[temp/2]<=a[temp-1]?2:1;
		}
		
		else if(temp%3==0){
		    a[i] = min(a[temp/3],a[temp-1]) +1;
			op[i] = a[temp/3]<=a[temp-1]?3:1;
		}
		
		else{
			a[i] = a[temp-1]+1;
			op[i] = 1;
		}
	}
	
	int x = 0,num = n;
	int seq[a[n]] = {0};
	
	while(x<=a[num]){
		
		seq[x] = n;
		
		if(op[n]==2){
			n/=2;
		}
		
		else if(op[n]==3){
			n/=3;
		}
		
		else{
			n-=1;
		}
		
		++x;
		
	}
	
	
	cout<<a[num]<<endl;
	
	for(i=x-1;i>=0;i--){
		cout<<seq[i];
		if(i!=0){
			cout<<" ";
		}
	}
	
	return 0;
	
}
