#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
typedef long long ll;

const int N = 2e5 + 10;
ll a[N];
string s[N]; 

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
		a[i] = stoi(s[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (s[i] == s[j] && m == 2) 
			{
				cout << s[i] << endl;
				return 0;
			}
		}
	}
	sort(a + 1, a + n + 1, greater<int>());
	for (int i = 2; i <= n; i++)
	{
		if (a[i] == a[i - 1] && m == 2) 
		{
			cout << (a[i] & a[i - 1]) << endl;
			return 0;
		}
	} 
	ll ans = a[1];
	for (int i = 2; i <= m; i++)
	{
		ans = ans & a[i];
	}
	cout << ans << endl;
	return 0;
} 
