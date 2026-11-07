#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,c;
	cin>>c1>>s1>>c2>>s2;

	if(c1==c2){
		c[0]='1';
		c[2]='1';
	}
	else{
		c[0,1,2,3]='0';
	}
	if(s1[0]==s2[0] and s1[1]==s2[1]){
		c[1]='1';
		c[2]='1';
	}
	else{
		c[1]='0';
		c[2]='0';
		c[3]='0';
	}
	if(s1[2]=='A' and s2[2]=='B' or s1[2]=='B' and s2[2]=='C' or s1[2]=='D' and s2[2]=='F'){
		c[1]='1';
		c[3]='1';
	}
	else{
		c[3]='0';
	}
	if(s1[2]=='C' and s2[2]=='D'){
		c[2]='0';
		c[3]='0';
	}

	cout<<c[0]<<c[1]<<c[2]<<c[3];
	return 0;
}