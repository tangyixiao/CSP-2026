#include<bits/stdc++.h> 
#define int long long
using namespace std;
string s1,s2,k1,k2; 
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>k1>>s2>>k2;
	if(s1==s2) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	}
	if(k1[0]==k2[0]&&k1[1]==k2[1]) cout<<'1';
	else{
		cout<<"000";
		return 0;
	}
	if((k1[2]<='C'&&k2[2]<='C')||(k1[2]>'C'&&k2[2]>'C')) cout<<'1';
	else{
		cout<<"00";
		return 0;
	}
	if(abs(k1[2]-k2[2])==1) cout<<'1';
	else cout<<"0";
	return 0;
}
/*
02 01A 02 01B

02 01C 02 01A

02 01C 02 01D

02 02B 02 01A

02 01A 03 01A
*/