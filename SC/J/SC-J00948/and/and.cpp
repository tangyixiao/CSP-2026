#include <bits/stdc++.h>
using namespace std;
const int N = 200010; 
int n, m, a[N], lg[200010];
string itob(int n)
{
	string res;
	while (n)
	{
		res = to_string(n%2) + res;
		n /= 2;
	}
	return res;
}
int calc0w(string s)
{
	int idx = s.size()-1;
	int res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '0') {
			res += pow(2, idx);
		}
		idx --;
	}
	return res;
}
bool cmp1(int a, int b)
{
	string s1 = itob(a);
	string s2 = itob(b);
	int aw = calc0w(s1);
	int bw = calc0w(s2);
	if (s1.size() != s2.size()) {
		return s1.size() > s2.size();
	}
	return aw < bw; 
}
int main()
{
	bool flagB = true;
	lg[1] = 0;
	for (int i = 1; i <= n; i++) {
		lg[i] = lg[i/2] + 1;
	}
	if (lg[n] == lg[n-1]) flagB = false;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int maxx = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] != (i-1)) flagB = false;
	}
	if (flagB) {
		cout << 0;
		return 0;
	}
	sort(a+1, a+n+1, cmp1);
	int ans = a[1];
	for (int i = 2; i <= m; i++) {
		ans &= a[i];
	}
	cout << ans;
	return 0;
}