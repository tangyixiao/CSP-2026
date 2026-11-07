#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

inline int check(string s) {
	if(s[2]=='A'||s[2]=='B'||s[2]=='C')
		return 1;
	return 2;
}

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
	} else {
		cout<<"0000";
		return 0;
	}
	
	bool flag=false;
	if(s1[0]==s2[0]&&s1[1]==s2[1]) {
		cout<<1;
		flag=true;
	}else cout<<0;
	
	bool is=false; 
	if(flag&&check(s1)==check(s2)) {
		cout<<1;
		is=true;
	} else {
		cout<<0;
		is=false;
	}
	
	if(is&&(int(s1[2]-s2[2])==1||int(s1[2]-s2[2])==-1)) {
		cout<<1;
	} else {
		cout<<0;
	}
	return 0;
}