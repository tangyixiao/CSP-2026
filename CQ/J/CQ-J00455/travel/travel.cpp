#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
bool check1() {
	if (s1[2]=='D' && s2[2]=='F') return 1;
	if (s1[2]=='F' && s2[2]=='D') return 1;
	if (s1[2]=='A' && s2[2]=='B') return 1;
	if (s1[2]=='A' && s2[2]=='C') return 1;
	if (s1[2]=='B' && s2[2]=='A') return 1;
	if (s1[2]=='B' && s2[2]=='C') return 1;
	if (s1[2]=='C' && s2[2]=='A') return 1;
	if (s1[2]=='C' && s2[2]=='B') return 1;
	return 0;
}
bool check2() {
	if (s1[2]=='D' && s2[2]=='F') return 1;
	if (s1[2]=='F' && s2[2]=='D') return 1;
	if (s1[2]=='A' && s2[2]=='B') return 1;
	if (s1[2]=='B' && s2[2]=='A') return 1;
	if (s1[2]=='B' && s2[2]=='C') return 1;
	if (s1[2]=='C' && s2[2]=='B') return 1;
	return 0;
}
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2) cout<<"1";
	else cout<<"0";
	int flag=1;
	for (int j=0;j<2;j++) {
		if (s1[j]!=s2[j]) flag=0;
	}
	if (c1!=c2) flag=0;
	cout<<flag;
	if (flag && check1()) cout<<1;
	else cout<<0;
	if (flag && check2()) cout<<1;
	else cout<<0;
	return 0;
}

