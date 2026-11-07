#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define c(a,b) (s1[2]==a&&s2[2]==b)
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool b1=(c1==c2);
	bool b2=b1&(s1[0]==s2[0]&&s1[1]==s2[1]);
	bool b3=b2&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'));
	bool b4=b3&(c(65,66)|c(66,67)|c(68,70)|
	c(66,65)|c(67,66)|c(70,68));
	cout << b1 << b2 << b3 << b4;
	return 0;
}