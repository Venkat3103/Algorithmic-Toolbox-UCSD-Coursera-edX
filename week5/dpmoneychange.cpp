#include<iostream>
using namespace std;

int main(){
	
	int coins[3] = {1,3,4};
	int money;
	cin>>money;
	int MinNumCoins[money+1];
	
	MinNumCoins[0] = {0};
	int m = 0,NumCoins = 0;
	
	for(m=1;m<=money;m++){
		MinNumCoins[m] = 1000;
		for(int i=0;i<3;i++){
			if(m>=coins[i]){
				NumCoins = MinNumCoins[m-coins[i]]+1;
				if(NumCoins<MinNumCoins[m]){
					MinNumCoins[m] = NumCoins;
				}
			}
		}
	}
	
	cout<<MinNumCoins[m-1];
	
	return 0;
	
}
