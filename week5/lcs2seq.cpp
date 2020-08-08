#include<iostream>
using namespace std;

int findMatch(int s1[],int s2[],int r,int c){
	int lcs[c][r] = {0};
	
	int j = 1;
	for(int i=2;i<r;i++){
		lcs[0][i] = s1[j];
		++j;
	}
	
	j=1;
	for(int i=2;i<c;i++){
		lcs[i][0] = s2[j];
		++j;
	}
	
	for(int j=0;j<c;j++){
		cout<<endl;
		for(int i=0;i<r;i++){
			cout<<lcs[j][i]<<" ";
		}
	}
	
	int i=0;
	j=0;
	
	for(j=1;j<c;j++){
		for(i=1;i<r;i++){
			if(i==1 || j==1){
				lcs[j][i] = 0;
			}
			else{
				if(lcs[j][0] == lcs[0][i]){
					lcs[j][i] = lcs[j-1][i-1] + 1;
				}
				else{
					lcs[j][i] = max(lcs[j-1][i],lcs[j][i-1]);
				}
			}
		}
	}
	cout<<endl;
	for(int j=0;j<c;j++){
		cout<<endl;
		for(int i=0;i<r;i++){
			cout<<lcs[j][i]<<" ";
		}
	}
	cout<<endl;
	return lcs[c-1][r-1];
	
}

int main(){
	int n=0,m=0,i=0;
	cin>>n;
	int s1[n+1] = {0};
	for(i=1;i<=n;i++){
		cin>>s1[i];
	}

	cin>>m;
	int s2[m+1] = {0};
	for(i=1;i<=m;i++){
		cin>>s2[i];
	}
	
	int p = findMatch(s1,s2,n+2,m+2);
	cout<<p;
	return 0;
	
}
