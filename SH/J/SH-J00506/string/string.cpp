#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
i64 n;
pair<char,int> m[200005];
i64 sum = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(i64 i = 1;i <= n;i++)
	{
		i64 k;
		char c;
		cin >> k >> c;
		sum += k;
		m[i].first = c;
		m[i].second = k; 
	}
	i64 l = 1,r = sum;
	i64 p = 1,q = n;
	i64 ans = 0;
	while(l < r)
	{
		if(m[p].first != m[q].first)
		{
			ans++;
		}
		m[p].second--;
		m[q].second--;
		if(m[p].second == 0)
		{
			p++;
		}
		if(m[q].second == 0)
		{
			q--;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}
