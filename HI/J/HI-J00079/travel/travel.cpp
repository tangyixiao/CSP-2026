#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
bool flag = false;
int a1 = 0;//0 abc 1 df
int a2 = 0;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (s1[2] == 'D' || s1[2] == 'F') {
		a1 = 1;
	}
	if (s2[2] == 'D' || s2[2] == 'F') {
		a2 = 1;
	}
	if (c1 == c2) {//车厢 
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {//排 
			cout << 1;
			if (a1 == a2) {//侧 
				cout << 1;
				if (a1 == 1) {
					cout << 1;
					return 0;
				} else {
					if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')) {
						cout << 1;
						return 0;
					} else {
						cout << 0;
						return 0;
					}
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout <<"000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	
	
	
	return 0;
}
/*
考神保佑我啊ToT 
*/ 
