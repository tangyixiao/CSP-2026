#include<bits/stdc++.h>
using namespace std;
string cr,cx;
char sr[10000],sx[10000];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr;
	for(int i=1;i<=3;i++){
		cin>>sr[i];
	}
	cin>>cx;
	for(int i=1;i<=3;i++){
		cin>>sx[i];
	}
	if(cr==cx){
		cout<<1;
		if(sr[1]==sx[1]&&sr[2]==sx[2]){
			cout<<1;
			if(sr[3]-'0'>=17&&sr[3]-'0'<=19&&sx[3]-'0'>=17&&sx[3]-'0'<=19){
				cout<<1;
				if(sr[3]-'0'-(sx[3]-'0')==1||sx[3]-'0'-(sr[3]-'0')==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else if(sr[3]-'0'>=20&&sr[3]-'0'<=21&&sx[3]-'0'>=20&&sx[3]-'0'<=21){
				cout<<"11";
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 
