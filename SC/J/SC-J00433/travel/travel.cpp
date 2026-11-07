#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

string c1,s1,c2,s2;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if (c1 == c2) {
		cout<<1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			if (max(s1[2],s2[2]) <= 'C' || min(s1[2],s2[2]) >= 'D') {
			cout<<1;
			if (abs(s1[2] - s2[2]) == 1) cout<<1;
			else cout<<0;
			}
			else {
				cout<<0;
				cout<<0;
			}
		}
		else {
			for (int i=1;i<=3;i++) {
				cout<<0;
			}
		}
	}
	else {
		for (int i=0;i<4;i++) {
			cout<<0;
		}
	}
	return 0;
}
