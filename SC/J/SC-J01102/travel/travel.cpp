#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	string s1,s2;
	cin>>n>>s1>>m>>s2;
	if(n==m) {
		cout<<1;
	} else {
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) {
		cout<<1;
	} else {
		cout<<"000";
		return 0;
	}
	int a,b;
	if(s1[2]=='E'||s1[2]=='D') {
		a=1;
	} else {
		a=0;
	}
	if(s2[2]=='E'||s2[2]=='D') {
		b=1;
	} else {
		b=0;
	}
	if(a==b) {
		cout<<1;
	} else {
		cout<<"00";
		return 0;
	}
	if(s1[2]-'0'-1==s2[2]-'0'||s1[2]-'0'+1==s2[2]-'0') {
		cout<<1;
	} else {
		cout<<"0";
	}
	return 0;
}