#include<bits/stdc++.h>
using namespace std;
string rc,rz,xc,xz,a="ABCDF";
bool f1,f2,f3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rz>>xc>>xz;
	if(rz[2]=='F') rz[2]='E';
	if(xz[2]=='F') xz[2]='E';
	if(rc==xc){
		cout<<1;
		f1=1;
	}else{
		cout<<"0000";
		return 0;
	}
	
	if(rz[0]==xz[0]&&rz[1]==xz[1]&&f1){
		cout<<1;
		f2=1;
	}else{
		cout<<"1000";
		return 0;
	}
	
	if(((rz[2]<='C' && xz[2]<='C') || (rz[2]>'C' && xz[2]>'C' && rz[2]<='E' && xz[2]<='E'))&&f1&&f2){
		cout<<1;
		f3=1;
	}else{
		cout<<"1100";
		return 0;
	}
	
	if(f1&&f2&&f3&&abs(rz[2]-xz[2])==1){
		cout<<1;
	}else{
		cout<<"1110";
		return 0;
	}
	return 0;
}
