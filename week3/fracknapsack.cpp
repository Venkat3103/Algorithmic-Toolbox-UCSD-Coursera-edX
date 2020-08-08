#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<bits/stdc++.h> 
	
using namespace std;
	
int main(){
	
	int N,W;
	cin>>N>>W;
	double tw = 0.0000;
	double mp = 0.0000;
	double profit[N] = {0.0000};
	double weight[N] = {0.0000};
	double unitprofit[N] = {0.0000};
	double tp = 0.0000; //total profit
	
	for(int i=0;i<N;i++){
		cin>>profit[i]>>weight[i];
		tw += weight[i];
		mp += profit[i];
		unitprofit[i] = profit[i]/weight[i];
	}
	
	if(W>tw){
		cout<<fixed<<setprecision(4)<<mp;
	
	}
	
	else{
		int index;
		int sz = sizeof(unitprofit)/sizeof(double);
		double max;
		
		
		while(W>0){
			
			max = 0;
			index = 0;
			
			max = *max_element(unitprofit,unitprofit+sz);
			index = distance(unitprofit,max_element(unitprofit,unitprofit+sz));
			
			if(W>=weight[index]){
				tp += profit[index];
				W-=weight[index];
			}
			
			else{
				tp += unitprofit[index]*W;
				W=0;
			}
			
			unitprofit[index] = 0;
			
		}
		
		cout<<fixed<<setprecision(4)<<tp;
	}
	
	
	return 0;
}
