#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int rc,rb,xc,xb;
	char rz,xz;
	cin>>rc>>rb>>rz>>xc>>xb>>xz;
	if(rc!=1&&rc!=16&&xc!=1&&xc!=16){
		if(rc==xc)  cout<<'1';
		else{
			cout<<"0000";
			return 0;
		}
		if(rb==xb)  cout<<'1';
		else{
			cout<<"000";
			return 0;
		}
		if(rz=='A'||rz=='B'||rz=='C'){
			if(xz=='A'||xz=='B'||xz=='C')  cout<<'1';
			else  cout<<"0";
		}
		else{
			if(xz=='D'||xz=='F'){
				cout<<"11";
				return 0;
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		if(rz=='A'&&xz=='C')  cout<<'0';
		else if(rz=='C'&&xz=='A')  cout<<'0';
		else if(xz=='D'||xz=='F')  cout<<'0';
		else  cout<<'1';
	}
	return 0;
}
