#include <bits/stdc++.h>
using namespace std;

long long a[200010];
long long maxn = -1,n,m;

void f(int now,int cnt,long long num)
{
	if(cnt == m)
	{
		maxn = max(maxn,num);
		return;
	}
	if(now == n + 1)
	{
		return;
	}
	f(now + 1,cnt + 1,(num & a[now]));
	f(now + 1,cnt,num);
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int flag = 1;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		int flag1 = 0;
		cin >> a[i];
		for(int j = 1;j <= 31;j++)
		{
			long long mi = pow(2,i) - 1;
			if(mi == a[i])
			{
				flag1 = 1;
				break;
			}
		}
		if(flag1 == 0)
		{
			flag = 0;
		}
	}
	if(flag == 1)
	{
		sort(a + 1,a + n + 1);
		cout << a[n - m + 1] << endl;
		return 0;
	}
	if(m == n)
	{
		int sum = a[1];
		for(int i = 2;i <= n;i++)
		{
			sum &= a[i];
		}
		cout << sum << endl;
		return 0;
	}
	f(1,0,pow(2,31) - 1);
	cout << maxn << endl;
	return 0;
}
