#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n;
	string a,b,xR,xX;
	cin>>a>>xR>>b>>xX;
	if(a==b){
		cout<<"1";
		if((xR[0]-'0')*10+(xR[1]-'0')==(xX[0]-'0')*10+(xX[1]-'0')){
			cout<<"1";
			if((xR[2]>='A' && xR[2]<='C') && (xX[2]>='A' && xX[2]<='C')){
				cout<<"1";
				if(xR[2]==xX[2]+1 || xR[2]==xX[2]-1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}
			else
			if((xR[2]>='D' && xR[2]<='E') && (xX[2]>='D' && xX[2]<='E')){
				cout<<"1";
				if(xR[2]==xX[2]+1 || xR[2]==xX[2]-1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
