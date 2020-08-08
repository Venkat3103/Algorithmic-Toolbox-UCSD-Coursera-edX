#include<iostream>
using namespace std;

int main(){
	
	int d=0,m=0,n=0;
	cin>>d>>m>>n;
	if(d<=m){
		cout<<"0";
		return 0;
	}
	
	int stop[n+2] = {0};
	
	int i;
	
	
	for(i=0;i<=n+1;i++){
		
		if(i==0){
			stop[i] = 0;
		}
		
		else if(i==n+1){
			stop[i] = d;
		}
		
		else{
			cin>>stop[i];
		}
		
		if((i!=0)&&((stop[i]-stop[i-1])>m)){
			cout<<"-1";
			return 0;
		}
	}
	
	int fill = 0;
	int s = m;
	i = 0;
	

	
	

		while(i<=n+1){
			if(stop[i]==s && i!=n+1){
				s+=m;
				++fill;
			}
			
			else if(stop[i]>s){
				s=stop[i-1]+m;
				++fill;
			}
			i++; 
		}
		
		cout<<fill;
	

return 0;
}
