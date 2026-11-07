#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
string a1,a2,b1,b2;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) {
		if(a2[0]+a2[1]==b2[0]+b2[1]) {
			if(a2[2]>='D'==b2[2]>='D') {
				if(abs(a2[2]-b2[2])==1) {
					cout<<"1111";
				} else {
					cout<<"1110";
				}
			} else {
				cout<<"1100";
			}
		} else {
			cout<<"1000";
		}
	} else {
		cout<<"0000";
	}
	return 0;
}