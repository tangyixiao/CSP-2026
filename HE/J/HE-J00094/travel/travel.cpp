#include<bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N = 1e5 + 66;
using ll = long long;
string s, s1, s2, s3;
signed main()
{
	freopen("travel.in", "r", stdin);freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);cin.tie(0), cout.tie(0);
	cin >> s >> s1 >> s2 >> s3;
	if(s == s2) cout << 1;
	else cout << 0;
	if(s == s2 && s1[0] == s3[0] && s1[1] == s3[1]) cout << 1;
	else cout << 0;
	if(s == s2 && s1[0] == s3[0] && s1[1] == s3[1] && ((s1[2] >= 'D' && s3[2] >= 'D') || (s1[2] <= 'C' && s3[2] <= 'C'))) cout << 1;
	else cout << 0;
	if(s == s2 && s1[0] == s3[0] && s1[1] == s3[1] && ((s1[2] >= 'D' && s3[2] >= 'D') || (s1[2] <= 'C' && s3[2] <= 'C')) && abs(s1[2] - s3[2]) == 1) cout << 1;
	else cout << 0;
	return 0;
}
