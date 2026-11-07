#include<bits/stdc++.h>
using namespace std;
int a,b;
string s1,s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>a>>s1>>b>>s2;
	if(a!=b) {
		cout<<"0000\n";
		return 0;
	}
	cout<<"1";
	int x=(s1[0]-'0')*10+s1[1]-'0',y=(s2[0]-'0')*10+s2[1]-'0';
	if(x!=y) {
		cout<<"000\n";
		return 0;
	}
	cout<<"1";
	if(!((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))) {
		cout<<"00\n";
		return 0;
	}
	cout<<"1";
	if(abs(s1[2]-s2[2])==1||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')) {
		cout<<"1\n";
		return 0;
	}
	cout<<"0\n";
	return 0;
}
