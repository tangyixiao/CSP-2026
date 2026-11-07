#include<bits/stdc++.h>
using namespace std;
string si[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++){
		cin>>si[i];
	}
	if(si[1]==si[3]){
		cout<<1;
		if(si[2][0]==si[4][0]&&si[2][1]==si[4][1]){
			cout<<1;
			if('A'<=si[2][2]&&'A'<=si[4][2]&&'C'>=si[2][2]&&'C'>=si[4][2]){
				cout<<1;
				if(abs(si[2][2]-si[4][2])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				if('D'<=si[2][2]&&'D'<=si[4][2]&&'F'>=si[2][2]&&'F'>=si[4][2]){
					cout<<1<<1;
				}else{
					cout<<0<<0;
				}
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
} 