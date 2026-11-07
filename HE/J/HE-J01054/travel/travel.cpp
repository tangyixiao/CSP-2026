#include<bits/stdc++.h>
using namespace std;
string rx,rh,xx,xh;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.in","w",stdout);
	cin>>rx>>rh>>xx>>xh;
	if(rx==xx){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(rh[0]==xh[0]&&rh[1]==xh[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if((rh[2]=='D'&&xh[2]=='F') || (rh[2]=='F'&&xh[2]=='D') || ((rh[2]=='A'||rh[2]=='B'||rh[2]=='C')&&(xh[2]=='A'||xh[2]=='B'||xh[2]=='C'))){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if((rh[2]=='D'&&xh[2]=='F')||(rh[2]=='F'&&xh[2]=='D')||(rh[2]=='A'&&xh[2]=='B')||(rh[2]=='B'&&xh[2]=='A')||(rh[2]=='B'&&xh[2]=='C')||(rh[2]=='C'&&xh[2]=='B')){
		cout<<"1";
	}else{
		cout<<"0";
		return 0;
	}
	
	return 0;
} 
