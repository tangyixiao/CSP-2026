#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string ans = "0000";
	map<char, int> mp = {{'A', 1}, {'B', 1}, {'C', 1}, {'D', 2}, {'F', 2}};
	ans[0] = c1 == c2 ? '1' : '0';
	ans[1] = (ans[0] == '1' && s1[0] == s2[0] && s1[1] == s2[1]) ? '1' : '0';
	ans[2] = (ans[1] == '1' && mp[s1[2]] == mp[s2[2]]) ? '1' : '0';
	ans[3] = (ans[2] == '1' && abs(s1[2] - s2[2]) == 1) ? '1' : '0';
	
	
	cout << ans << '\n';

	return 0;
}