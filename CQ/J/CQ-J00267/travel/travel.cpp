#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string sr1,sr2;
	string sx1,sx2;
	cin>>sr1>>sr2>>sx1>>sx2;
	if(sr1==sx1){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(sr2[0]==sx2[0]&&sr2[1]==sx2[1]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(sr2[2]<='C'&&sx2[2]<='C'){
		cout<<"1";
	}else if(sr2[2]>='D'&&sx2[2]>='D'){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(sr2[2]=='A'&&sx2[2]=='B'){
		cout<<"1";
	}else if(sr2[2]=='B'&&sx2[2]=='A'){
		cout<<"1";
	}else if(sr2[2]=='B'&&sx2[2]=='C'){
		cout<<"1";
	}else if(sr2[2]=='C'&&sx2[2]=='B'){
		cout<<"1";
	}else if(sr2[2]=='D'&&sx2[2]=='F'){
		cout<<"1";
	}else if(sr2[2]=='F'&&sx2[2]=='D'){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
