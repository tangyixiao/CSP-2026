#include<bits/stdc++.h>
using namespace std;
int flag, flag1, flag2;
string c, s, c1, s1;
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c >> s >> c1 >> s1;
	if (c == c1) cout << 1;
	else{
		cout <<  0;
		flag2 = 1;
	}
	for (int i = 0;i <= 1;i ++) {
		if (s[i] != s1[i] || flag2) {
			cout << 0;
			flag = 1;
			break;
		}
	}
	if (!flag) cout << 1;
//	cout << flag;
	if (flag == 0 && ((s[2] == 'A' && s1[2] == 'B') || (s[2] == 'A' && s1[2] == 'C') || (s[2] == 'B' && s1[2] == 'C') || (s[2] == 'B' && s1[2] == 'A') || (s[2] == 'C' && s1[2] == 'A') || (s[2] == 'C' && s1[2] == 'B') || (s[2] == 'D' && s1[2] == 'F') || (s[2] == 'F' && s1[2] == 'D'))){
		cout << 1;
//		cout << "jhs";
		flag1 = 1;
	} else cout << 0;
	
	if (!flag && flag1 && ((s[2] == 'A' && s1[2] == 'B') ||(s[2] == 'B' && s1[2] == 'C') || (s[2] == 'D' && s1[2] == 'F') || (s[2] == 'B' && s1[2] == 'A') || (s[2] == 'C' && s1[2] == 'B') || (s[2] == 'F' && s1[2] == 'D'))) cout << 1;
	else cout << 0;
	return 0;
}
