#include <bits/stdc++.h>
#define rep(a, b, c) for (int i = a; i <= b; i += c)
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int c1, c2, id1, id2;
string s1, s2;

int main() {
	IOS;
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	id1 = s1[2] - 'A', id2 = s2[2] - 'A';
	if (c1 == c2) cout << '1';
	else cout << '0';
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]) cout << '1';
	else cout << '0';
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && (((0 <= id1 && 2 >= id1) && (0 <= id2 && 2 >= id2)) || ((3 <= id1 && 4 >= id1) && (3 <= id2 && 4 >= id2)))) cout << '1';
	else cout << '0';
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && (((0 <= id1 && 2 >= id1) && (0 <= id2 && 2 >= id2)) || ((3 <= id1 && 4 >= id1) && (3 <= id2 && 4 >= id2))) && ((min(id1, id2) + 1 == max(id1, id2)) && (min(id1, id2) != 2))) cout << '1';
	else cout << '0';
	return 0;
}