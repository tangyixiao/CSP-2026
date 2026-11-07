#include<bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 9;
int n;
long long len, ans, a[_];
char c[_];
vector<pair<long long, char> > L, R;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		long long x;
		cin >> x >> c[i];
		len += x;
		a[i + 1] = a[i] + x;
	}
	long long l, r;
	if(len % 2)
		l = len / 2, r = len / 2 + 2;
	else
		l = len / 2, r = len / 2 + 1;
	long long sum = 0;
	int lp = upper_bound(a + 1, a + n + 1, l) - a - 1;
	int rp = lower_bound(a + 1, a + n + 1, r) - a;
	L.push_back(make_pair(l - a[lp], c[lp]));
	for(int i = lp - 1;i >= 1;i--)
		L.push_back(make_pair(a[i + 1] - a[i], c[i]));
	R.push_back(make_pair(a[rp] - r + 1, c[rp - 1]));
	for(int i = rp;i <= n;i++)
		R.push_back(make_pair(a[i + 1] - a[i], c[i]));
//	for(auto i : L)
//		cout << i.first << ' ' << i.second << '\n';
//	cout << '\n';
//	for(auto i : R)
//		cout << i.first << ' ' << i.second << '\n';
	int i = 0, j = 0;
	while(i < L.size() || j < R.size())
	{
//		cout << i << ' ' << j << ' ' << ans << '\n';
		if(L[i].first == R[j].first)
		{
			if(L[i].second != R[j].second)
				ans += L[i].first;
			i++, j++;
		}
		else if(L[i].first < R[j].first)
		{
			if(L[i].second != R[j].second)
				ans += L[i].first;
			R[j].first -= L[i].first;
			i++;
		}
		else
		{
			if(L[i].second != R[j].second)
				ans += R[j].first;
			L[i].first -= R[j].first;
			j++;
		}
	}
	cout << ans;
	
	return 0;
}
