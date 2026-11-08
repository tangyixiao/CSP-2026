#include <bits/stdc++.h>
using namespace std;
#define int long long

string c1 , s1 , c2 , s2;

signed main () {
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	bool q1 = (c1 == c2);;
	bool q2 = (s1[0] == s2[0] && s1[1] == s2[1]) & q1;
	bool q3 = (('A' <= s1[2] && s1[2] <= 'C' && 'A' <= s2[2] && s2[2] <= 'C') || (s1[1] == 'D' && s2[1] == 'F') || (s1[1] == 'F' && s2[1] == 'D')) & q2;
	bool q4 = (s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2]) & q3;
	cout << q1 << q2 << q3 << q4;
	return 0;
}

