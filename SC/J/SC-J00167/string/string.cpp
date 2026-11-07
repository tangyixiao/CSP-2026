#include<bits/stdc++.h>
using namespace std;
int len[200010];
char c[200010];
long long sum[200010];
int main(void)
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> len[i] >> c[i];
		sum[i] = sum[i - 1] + len[i];
	}
	long long fw = 0;
	int id = 0;
	for(int i = 1;i <= n && fw * 2 < sum[n];i++)
	{
		fw += len[i];
		id = i;
	}
	long long ans = 0;
	if(sum[n] & 1)
	{
		long long l = (sum[n] + 1) / 2 - sum[id - 1] - 1, r = fw - (sum[n] + 1) / 2, ans = 0;
		int md = min(l, r);
		l -= md, r -= md;
		int i = id, j = id;
		while(i && j <= n)
		{
			if(l > r)
			{
				j++;
				if(j > n)
				{
					break;
				}
				r += len[j]; 
				md = min(l, r);
				if(c[i] != c[j])
				{
					ans += min(l, r);
				}
				l -= md, r -= md;
			}
			else
			{
				i--;
				if(!i)
				{
					break;
				}
				l += len[i];
				md = min(l, r); 
				if(c[i] != c[j])
				{
					ans += min(l, r);
				}
				l -= md, r -= md;
			}
		}
		cout << ans;
	}
	else
	{
		long long l = sum[n] / 2 - sum[id - 1], r = fw - sum[n] / 2, ans = 0;
		int md = min(l, r);
		l -= md, r -= md;
		int i = id, j = id;
		while(i && j <= n)
		{
			if(l > r)
			{
				j++;
				if(j > n)
				{
					break;
				}
				r += len[j]; 
				md = min(l, r);
				if(c[i] != c[j])
				{
					ans += min(l, r);
				}
				l -= md, r -= md;
			}
			else
			{
				i--;
				if(!i)
				{
					break;
				}
				l += len[i];
				md = min(l, r); 
				if(c[i] != c[j])
				{
					ans += min(l, r);
				}
				l -= md, r -= md;
			}
		}
		cout << ans;
	}
	return 0;
}