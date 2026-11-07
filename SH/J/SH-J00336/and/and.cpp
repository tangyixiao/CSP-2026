#include <bits/stdc++.h>
using namespace std;

int a[100005];
int ti = 0;
int w = 0;
bool flag = false;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m, maxn = 0;
	cin >> n >> m;
	if(m == 1) ti = 6;
	if(m == n) ti = 7;
	if(m == 2) ti = 810; 
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i] == a[i - 1])
		{
			w = max(w, a[i]);
			flag = true;
		}
	}
	
	if(ti == 7)//m = n
	{
		ans = a[1];
		for(int i = 2; i <= n; i++)
		{
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	
	if(ti == 810)
	{
		if(flag == true)
		{
			cout << w << endl;
			return 0;
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				maxn = max(maxn, i & j);
			}
		}
		cout << maxn;
		return 0;
	}
	
	if(ti == 6)
	{
		sort(a+1,a+n+1);
		cout << a[n];
		return 0;
	}
	return 0;
}
