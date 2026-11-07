#include<bits/stdc++.h>
using namespace std;
string cx,hl,cx1,hl1;
int j,xj;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx>>hl>>cx1>>hl1;
	j=cx[0]*10+cx[1];
	xj=cx1[0]*10+cx1[1];
	if(j==xj)cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	j=hl[0]*10+hl[1];
	xj=hl1[0]*10+hl1[1];
	if(j==xj)cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if((hl[2]<='C'&&hl1[2]<='C')||(hl[2]>='D'&&hl1[2]>='D'))cout<<"1";
	else{
		cout<<"00";
		return 0;
	} 
	if(hl[2]>='D'||(hl[2]=='A'&&hl1[2]=='B')||(hl[2]=='B'&&hl1[2]=='A')||(hl[2]=='B'&&hl1[2]=='C')||(hl[2]=='C'&&hl1[2]=='B'))cout<<"1";
	else cout<<"0";
	return 0;
} 