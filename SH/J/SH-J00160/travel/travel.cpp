#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

inline bool judgeInSameR(const string &s1, const string&s2) {
    for (int i = 0; i < 2; i++) if (s1[i] != s2[i]) return false;
    return true;
}
inline bool judgeInSameSide(const string &s1, const string &s2) {
    bool flag1 = false, flag2 = false;
    if (s1[2] - 'A' <= 2) flag1 = true;
    if (s2[2] - 'A' <= 2) flag2 = true;
    if (flag1 == flag2) return true;
    else return false;
}
inline bool judgeInSameBeside(const string &s1, const string &s2) {
    int val1 = s1[2] - 'A', val2 = s2[2] - 'A';
    if (val1 + 1 == val2 || val2 + 1 == val1) return true;
    else return false;
}

int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c1 >> s1 >> c2 >> s2;
    if (c1 == c2) {
    	cout << "1";
    	if (judgeInSameR(s1, s2)) {
    		cout << "1";
    		if (judgeInSameSide(s1, s2)) {
    			cout << "1";
    			if (judgeInSameBeside(s1, s2)) cout << "1";
    			else cout << "0";
			} else cout << "00";
		}
    	else cout << "000";
	} else cout << "0000";
    return 0;
}
