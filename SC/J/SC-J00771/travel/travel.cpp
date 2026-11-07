#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000\n";
		return 0;
	}
	string st1,st2;
	st1=s2.substr(0,2);
	st2=s4.substr(0,2);
	if(st1!=st2){
		cout<<"1000\n";
		return 0;
	}
	char a=s2[2],b=s4[2];
	if(a=='A'||a=='B'||a=='C'){
		if(b=='D'||b=='F'){
			cout<<"1100\n";
			return 0;
		}
	}
	if(b=='A'||b=='B'||b=='C'){
		if(a=='D'||a=='F'){
			cout<<"1100\n";
			return 0;
		}
	}
	if(abs(a-b)==1) cout<<"1111\n";
	else cout<<"1110\n";
	return 0;
}