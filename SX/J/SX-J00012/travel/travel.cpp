#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a1, b1;
ll a, b, ans1, ans2, ans3, ans4;
char sum1, sum2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> a >> a1 >> b >> b1;
	if (a == b)
		ans1 = 1;
	if (ans1 == 1 && a1[0] == b1[0] && a1[1] == b1[1])
		ans2 = 1;
	sum1 = a1[2], sum2 = b1[2];
	if (ans1 == 1 && ans2 == 1 && (((sum1 == 'A' || sum1 == 'B' || sum1 == 'C') && (sum2 == 'A' || sum2 == 'B'
	                                || sum2 == 'C')) || ((sum1 == 'D' || sum1 == 'E') && (sum2 == 'D' || sum2 == 'E'))))
		ans3 = 1;
	if (ans1 == 1 && ans2 == 1 && ans3 == 1 && ((sum1 == 'A' && sum2 == 'B') || (sum1 == 'B' && sum2 == 'A')
	        || (sum1 == 'B' && sum2 == 'C') || (sum1 == 'C' && sum2 == 'B') || (sum1 == 'F' && sum2 == 'D') || (sum1 == 'D'
	                && sum2 == 'F')))
		ans4 = 1;
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}
