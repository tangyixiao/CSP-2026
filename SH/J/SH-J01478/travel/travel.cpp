#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	int nr=sr[2],nx=sx[2];
	if(cr==cx){
		cout<<"1";
		if(sr[0]==sx[0]&&sr[1]==sx[1]){
			cout<<"1";
			if((nr>='A'&&nr<='C')&&(nx>='A'&&nx<='C')||((nr>='D'&&nr<='F')&&(nx>='D'&&nx<='F'))){
				cout<<"1";
			}else{
				cout<<"0";
			}
			if((nr=='A'&&nr=='B')||(nr=='B'&&nr=='A')||(nr=='B'&&nr=='C')||(nr=='C'&&nr=='B')||(nr=='D'&&nr=='F')||(nr=='F'&&nr=='D')){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			cout<<"00";
		}	
	}else{
		cout<<"0000";
	}
	return 0;
}
