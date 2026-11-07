#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll num[200005];
char ch[200005];

// RP++
int main()
{
	freopen("string.in", "r", stdin);
//	freopen("..\\cspj\\down\\string\\string6.in", "r", stdin);
	freopen("string.out", "w", stdout);
//	freopen("..\\cspj\\down\\string\\string.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	ll ttl = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i] >> ch[i], ttl += num[i];
	ll mid = ttl / 2;
	ll p = 1, l = 0, r = n - 1, change = 0;
	while (l < r)
	{
		if (num[l] > num[r])
		{
			if (ch[l] != ch[r])
				change += num[r];
			num[l] -= num[r], num[r] = 0, r--;
		}
		else if (num[l] < num[r])
		{
			if (ch[l] != ch[r])
				change += num[l];
			num[r] -= num[l], num[l] = 0, l++;
		}
		else
		{
			if (ch[l] != ch[r])
				change += num[l];
			num[l] = num[r] = 0, l++, r--;
		}
	}
	
	cout << change;
	
	return 0;
}