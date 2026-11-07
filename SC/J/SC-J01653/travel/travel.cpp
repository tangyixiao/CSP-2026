#include <bits/stdc++.h>
#define rep(i, l, r) for(int i = (l); i <= (r); i ++ )
#define per(i, l, r) for(int i = (l); i >= (r); i -- )
#define frein(s) freopen(s, "r", stdin)
#define freout(s) freopen(s, "w", stdout)
#define endl '\n'
using namespace std;

string c1, s1, c2, s2;

int main() {
	frein("travel.in"), freout("travel.out");
	ios :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	bool flag = true;
	flag &= (c1 == c2);
	cout << flag;
	flag &= (s1[0] == s2[0] && s1[1] == s2[1]);
	cout << flag;
	flag &= ('A' <= s1[2] && s1[2] <= 'C' && 
			'A' <= s2[2] && s2[2] <= 'C') ||
		('D' <= s1[2] && s1[2] <= 'F' && 
			'D' <= s2[2] && s2[2] <= 'F');
	cout << flag;
	flag &= !(min(s1[2], s2[2]) == 'A' && max(s1[2], s2[2]) == 'C');
	cout << flag;
	return 0;
}
//code by wsy_I. luogu uid: 1152799