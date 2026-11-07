#include<bits/stdc++.h>

using namespace std;

int n , m;
long long a[200005];
long long k;

void dfs(int pos , int cnt , long long num)
{
	if(cnt == m)
	{
		k = max(k , num);
		return ;
	}
	while(pos <= n)
	{
		dfs(pos + 1 , cnt + 1 , num & a[pos + 1]);
		pos ++;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d" , &n , &m);
	bool f1 = 1;
	for(int i = 1;i <= n;i++)
	{
		scanf("%d" , &a[i]);
		if(a[i] > 4)
		{
			f1 = 0;
		}
	}
	if(m == 1)
	{
		k = LONG_MIN;
		for(int i = 1;i <= n;i++)
		{
			k = max(k , a[i]);
		}
		cout << k;
		return 0;
	}
	if(m == 2)
	{
		k = LONG_MIN;
		for(int i = 1;i <= n;i++)
		{
			for(int j = i + 1;j <= n;j++)
			{
				k = max(k , a[i] & a[j]);
			}
		}
		cout << k;
		return 0;
	}
	if(m == n)
	{
		k = a[1];
		for(int i = 2;i <= n;i++)
		{
			k &= a[i];
		}
		cout << k;
		return 0;
	}
	if(n <= 20)
	{
		k = LONG_MIN;
		for(int i = 1;i <= n;i++)
		{
			dfs(i , 1 , a[i]);
		}
		cout << k;
		return 0;
	}
	sort(a + 1 , a + n + 1);
	cout << a[n - m + 1];
	return 0;
}
