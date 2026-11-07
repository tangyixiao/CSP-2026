#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
ll n, m, a[N], ans;
vector<ll> now;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		now.push_back(i);
	}
	for(int i = 30; i >= 0; i--)
	{
		vector<ll> v;
		for(auto j : now)
		{
//			cout << j << " ";
			if(a[j] & (1 << i))
			{
				v.push_back(j);
			}
		}
//		cout << endl;
		if(v.size() >= m)
		{
			ans += (1 << i);
			now = v;
		}
	}
	cout << ans;
	return 0;
}
