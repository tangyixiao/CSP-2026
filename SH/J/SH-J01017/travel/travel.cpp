#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,xc;
	string zr,zx;
	cin>>rc>>zr>>xc>>zx;
	if(rc!=xc){
		cout<<"0000";
		return 0;
	}
	if(zr[0]!=zx[0]||zr[1]!=zx[1]){
		cout<<"1000";
		return 0;
	}
	if((zr[2]<='C'&&zx[2]>='D')||(zx[2]<='C'&&zr[2]>='D')){
		cout<<"1100";
		return 0;
	}
	if((zr[2]=='C'&&zx[2]=='A')||(zx[2]=='C'&&zr[2]=='A')){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
