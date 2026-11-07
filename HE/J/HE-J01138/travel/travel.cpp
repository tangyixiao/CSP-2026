#include <bits/stdc++.h>
using namespace std;
using LL=long long;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	LL a1,b1,a2,b2;
	char a,b;
	cin>>a1>>b1>>a>>a2>>b2>>b;
	if(a1==a2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	} 
	if(b1==b2){
		cout<<"1";
	}
	else {
		cout<<"000";
		return 0;
	}
	if(a=='A'&&(b=='B'||b=='C'))cout<<1;
	else if(b=='A'&&(a=='B'||a=='C'))cout<<1;
	else if(a=='B'&&(b=='A'||b=='C'))cout<<1;
	else if(b=='B'&&(a=='A'||a=='C'))cout<<1;
	else if(a=='C'&&(b=='A'||b=='B'))cout<<1;
	else if(b=='C'&&(a=='A'||b=='B'))cout<<1;
	if(a=='D'&&b=='F')cout<<1;
	if(a=='F'&&b=='D')cout<<1;
	if(a=='C'&&b=='D'){
		cout<<"00";
		return 0;	
	}
	if(a=='D'&&b=='C'){
		cout<<"00";
		return 0;
	}
	int num=abs(a-b);
	if(num==1)cout<<1;
	else cout<<0;
}
