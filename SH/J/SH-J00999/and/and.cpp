#include<bits/stdc++.h>
using namespace std;
#define N 200020
int a[N];
int ans[32];
bool f[N];
bool ff[N];
bool cmp(int z,int y)
{
	return z > y;
}
int chengfang(int q,int p)
{
	int yyy = 1;
	for(int e = 1;e <= p;e++)
	{
		yyy *= q;
	}
	return yyy;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		f[i] = 1;
		cin >> a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i = 30;i >= 0;i--)
	{
		int cnt = 0;
		for(int j = 1;j <= n;j++)
		{
			if((a[j] & chengfang(2,i)) != 0 && f[j] != 0)//如果错了记得回来改 
			{
				cnt++;
				ff[j] = 1;
			}
			else
			{
				ff[j] = 0;
			}
		}
		if(cnt > m)
		{
			ans[i] = 1;
			for(int r = 1;r <= n;r++)
			{
				if(ff[r] == 0)
				{
					f[r] = 0;
				}
			}
		}
		else if(cnt < m)
		{
			ans[i] = 0;
		}
		else
		{
			int ysqd = chengfang(2,31)-1;
			for(int w = 1;w <= n;w++)
			{
				if(ff[w])
				{
					ysqd = (ysqd & a[w]);
				}
			}
			cout << ysqd;
			return 0;
		}
	}	
	int g = 0;
	for(int i = 0;i <= 30;i++)
	{
		g += ans[i] * chengfang(2,i);
	//	cout << ans[i];
	}
//	cout << endl;
	cout << g;
	return 0;
}
