#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1, s1, c2, s2;
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
		string t1 = "", t2 = "";
		for(int i = 0; i < 2; ++i) {
			t1 += s1[i];
			t2 += s2[i];
		}
		if(t1 != t2) {
			cout << "000";
			return 0;
		} else {
			cout << 1;
			string ch1 = "", ch2 = "";
			for(int i = 2; i < 3; ++i) {
				ch1 += s1[i];
				ch2 += s2[i];
			}
			if(ch1 == "A") {
				if(ch2 == "B" || ch2 == "C") cout << 1;
				else {
					cout << "00";
					return 0;
				}
				if(ch2 == "B") cout << 1;
				else cout << 0;
			} else if(ch1 == "B") {
				if(ch2 == "A" || ch2 == "C") cout << 11;
				else {
					cout << "00";
					return 0;
				}
			} else if(ch1 == "C") {
				if(ch2 == "B" || ch2 == "A") cout << 1;
				else {
					cout << "00";
					return 0;
				}
				if(ch2 == "B") cout << 1;
				else cout << 0;
				return 0;
			} else if(ch1 == "D") {
				if(ch2 == "E") cout << 11;
				else {
					cout << "00";
					return 0;
				}
			} else if(ch1 == "E") {
				if(ch2 == "D") cout << 11;
				else {
					cout << "00";
					return 0;
				}
			}
		}
	}
	return 0;
}