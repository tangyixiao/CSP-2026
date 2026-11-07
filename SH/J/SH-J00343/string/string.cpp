#include <bits/stdc++.h>
using namespace std;
int n,maxi;
int a[200100];
long long b[200100],mem[200100];
char c[200100];
long long L,ans;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
		L += a[i];
		b[i] = L;
	}
	long long mid = L / 2;
	bool first = true;
	for(int i = 1;i <= n;i++)
	{
		if(b[i] > mid)
		{
			mem[i] = b[i];
			if(first)
			{
				maxi = i;
				b[i] = mid;
				first = false;
			}
			else
			{
				b[i] = L - mem[i - 1];				
			}
		}
	}
	int checki = n;
	for(int i = 1;i <= maxi;i++)
	{
		while((b[checki] > b[i - 1]) && (b[checki + 1] < b[i]) && (checki >= maxi))
		{
			if(c[checki] != c[i])
			{
				ans += min(b[checki], b[i]) - max(b[i - 1], b[checki + 1]);
			}
			if(b[checki] <= b[i])
			{
				checki--;				
			}
			else
			{
				break;
			}
		}
	}
	cout << ans;
}
