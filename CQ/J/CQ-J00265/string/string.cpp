#include<bits/stdc++.h>
using namespace std;
long long n;
struct pos{
	long long p;
	char c;
};
vector<pos> a, b;
string s1, s2;
long long dp[5005][5005];
int main(){
	ios::sync_with_stdio(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	a.resize(n);
	for (long long i = 0; i < a.size(); i++) {
		cin >> a[i].p >> a[i].c;
		s1.insert(s1.end(), a[i].p, a[i].c);
	}
	//cout << s1;
	s2 = s1;
	reverse(s2.begin(), s2.end());
	n = s1.size();
	s1 = " " + s1;
	s2 = " " + s2;
	for (long long i = 1; i <= n; i++) {
		for (long long j = 1; j <= n; j++) {
			dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[j][i - 1]));
			if (s1[i] == s2[j]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
			}
		}
	}
	cout << n - dp[n][n]; 
	return 0;
}

