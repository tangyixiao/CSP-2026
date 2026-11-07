#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s1, s2;
int c1, c2;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	bool a = (c1 == c2);
	bool b = a && (s1[0] == s2[0]) && (s1[1] == s2[1]);
	bool c = b && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'));
	bool d = c && ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'D' && s2[2] == 'F'));
	cout << a << b << c << d;
	return 0;
}
