#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
ll n, a[N], sum, sum_pre, sum_nxt, ans, l, r, b[N];
char c[N];
vector<ll> v;
void solve1()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= a[i]; j++)
		{
			v.push_back(c[i] - 'a');
		}
	}
	for(int i = 0; i < v.size(); i++)
	{
		if(v.size() - i - 1 <= i)
		{
			break;
		}
		if(v[i] != v[v.size() - i - 1])
		{
			ans++;
		}
	}
	cout << ans;
}
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	if(sum <= 1e6)
	{
		solve1();
		return 0;
	}
	r = n + 1;
	while(sum_pre + a[l + 1] <= sum / 2)
	{
		l++;
		if(sum_pre + a[l] <= sum_nxt)
		{
			if(c[l] != c[r])
			{
				ans += a[l];
			}
			sum_pre += a[l];
			continue;
		}
		if(sum_nxt > sum_pre && c[r] != c[l])
		{
			ans += sum_nxt - sum_pre;
		}
		sum_pre += a[l];
		while(sum_nxt < sum_pre)
		{
			r--;
			if(sum_nxt + a[r] > sum_pre)
			{
				if(c[l] != c[r])
				{
					ans += sum_pre - sum_nxt;
				}
			}
			else
			{
				if(c[l] != c[r])
				{
					ans += a[r];
				}
			}
			sum_nxt += a[r];
		}
//		cout << "!" << l << " " << r << endl;
	}
	if(l + 1 != r)
	{
		char tmp = c[++l];
		while(l + 1 != r)
		{
			if(c[++l] != tmp)
			{
				ans += a[l];
			}
		}
		if(c[r] != tmp)
		{
			ans += sum_nxt - sum_pre;
		}
	}
	cout << ans;
	return 0;
}
