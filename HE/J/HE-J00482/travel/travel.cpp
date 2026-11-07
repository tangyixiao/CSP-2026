#include<bits/stdc++.h>
using namespace std;
int cxh1,cxh2;
string zwh1;
string zwh2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cxh1>>zwh1>>cxh2>>zwh2;
	if(cxh1==cxh2){
		cout<<1;
		if(zwh1[0]==zwh2[0]&&zwh1[1]==zwh2[1]){
			cout<<1;
			if((zwh1[2]=='A'&&zwh2[2]=='B'||zwh2[2]=='C')||(zwh1[2]=='B'&&zwh2[2]=='A'||zwh2[2]=='C')||(zwh1[2]=='c'&&zwh2[2]=='B'||zwh2[2]=='A')||(zwh1[2]=='D'&&zwh2[2]=='F')||(zwh1[2]=='F'&&zwh2[2]=='D')){
				cout<<1;
				if((zwh1[2]=='B'&&zwh2[2]=='A'||zwh2[2]=='C')||(zwh1[2]=='A'&&zwh2[2]=='B')||(zwh1[2]=='C'&&zwh2[2]=='B')||(zwh1[2]=='D'&&zwh2[2]=='F')||(zwh1[2]=='F'&&zwh2[2]=='D')){
					cout<<1;
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
