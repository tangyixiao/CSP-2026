#include<bits/stdc++.h>
using namespace std;
string rw,xw;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int r,x;
	cin>>r>>rw>>x>>xw;
	if(r==x){
		cout<<'1';
	}
	else{
		cout<<"0"<<"0"<<"0"<<"0";
		return 0;
	}
	int rp=(rw[0]-48)*10+(rw[1]-48);
	int xp=(xw[0]-48)*10+(xw[1]-48);
	if(rp==xp){
		cout<<"1";
	}
	else{
		cout<<"0"<<"0"<<"0";
		return 0;
	}
	
	int rc=1,xc=1;
	if(rw[2]>='A'&&rw[2]<='C'){
		rc=2;
	}
	if(xw[2]>='A'&&xw[2]<='C'){
		xc=2;
	}
	if(rc==xc){
		cout<<"1";
	}
	else{
		cout<<"0"<<"0";
		return 0;
	}
	if(rc==1){
		cout<<"1";
	}
	else{
		int n=rw[2]-xw[2];
		if(n==1||n==-1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return  0;
}