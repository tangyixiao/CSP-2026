#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[100010],p[100010],b[100010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn = 0,maxa = 0,minn = 1e9;
	bool flag = 1,F = 1,P;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i];
		if(a[i] != i - 1)
		{
			F = 0;
		}
		int t = a[i];
		while(t >= 1)
		{
			if(t % 2 == 0)
			{
				p[i] ++;
				flag = 0;
			}
			t /= 2;
		}
		maxn = max(maxn,p[i]);
		maxa = max(maxa,a[i]);
		if(minn > p[i])
		{
			minn = p[i];
			P = i;
		}
	}
	if(m == 1)//5分,6
	{
		cout << maxn << endl;
	}
	else if(m == n)//5分,7
	{
		int ans = a[1];
		for(int i = 2 ; i <= n ; i ++)
		{
			ans = ans & a[i];
		}
		cout << ans << endl;
	}
	else if(m == 2)//15分,8~10
	{
		int ans = 0;
		for(int i = 1 ; i <= n ; i ++)
		{
			for(int j = i + 1 ; j <= n ; j ++)
			{
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout << ans << endl;
	}
	else if(m == n - 1)//10分,11,12
	{
		int ans = a[1];
		for(int i = 2 ; i <= n ; i ++)
		{
			if(i == P)
			{
				continue;
			}
			ans = ans & a[i];
		}
		cout << ans << endl;
	}
	else if(maxa < 4)//10分,16,17
	{
		for(int i = 1 ; i <= n ; i ++)
		{
			b[a[i]] ++;
		}
		if(m <= b[3])
		{
			cout << 3 << endl;
		}
		else if(m <= b[2] + b[3])
		{
			cout << 2 << endl;
		}
		else if(m <= b[1] + b[3])
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
	else if(flag == 1)//5分,13 
	{
		sort(a + 1,a + n + 1);
		cout << a[n - m + 1] << endl;
	}
	else if(F == 1)//10分,14,15 
	{
		int k = 0,cnt = 0;
		while(n > 1)
		{
			n /= 2;
			k ++;
		}
		while(F > 1)
		{
			F = ceil(F * 1.0 / 2);
			cnt ++;
		}
		cout << pow(2,k) - pow(2,cnt) << endl;
	}
	return 0;	
}
