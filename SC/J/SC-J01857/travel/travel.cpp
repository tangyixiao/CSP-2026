#include<bits/stdc++.h>
using namespace std;
int rc,xc;
string rz,xz;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rz>>xc>>xz;
	int pr=(rz[2]=='A' or rz[2]=='B' or rz[2]=='C');
	int px=(xz[2]=='A' or xz[2]=='B' or xz[2]=='C');
	if(rc==xc){
		cout<<1;
		if(rz[0]==xz[0] and rz[1]==xz[1]){
			cout<<1;
			if(rz[0]==xz[0] and rz[1]==xz[1] and pr==px){
				cout<<1;
				if(abs((rz[2]-'0')-(xz[2]-'0'))==1 and !(rz[2]=='C' and xz[2]=='D') and !(rz[2]=='D' and xz[2]=='C')){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}