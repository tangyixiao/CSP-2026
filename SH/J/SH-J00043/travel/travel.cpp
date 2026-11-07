#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair <int, int>;
using veci = vector <int>;
using vecll = vector <long long>;

//void solve();

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
//	freopen("debug.in", "r", stdin);
//	freopen("debug.out", "w", stdout);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2; cin >> c1 >> s1 >> c2 >> s2;
	int  ans1 = (c1 == c2),
		 ans2 = ans1 && (s1[0] == s2[0] && s1[1] == s2[1]),
		 ans3 = ans2 && ((s1[2] >= 'A' && s1[2] <= 'C') == (s2[2] >= 'A' && s2[2] <= 'C')),
		 ans4 = ans3 && (abs(s1[2] - s2[2]) == 1);

	cout << ans1 << ans2 << ans3 << ans4 << '\n';

	return 0;
}
