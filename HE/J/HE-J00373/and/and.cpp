#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n,m,ans;
int a[N],num[40];
queue<int> q[2];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i = 1,x,bit;i <= n;i ++)
	{
		cin >> a[i];
		x = a[i];
		bit = 0;
		while(x)
		{
			if(x & 1)
			{
				num[bit] ++;
			}
			x >>= 1;
			bit ++;
		}
		q[1].push(a[i]);
	}
	int cnt = 0;
	for(int i = 31;i >= 0;i --)
	{
		if(num[i] >= m)
		{
			cnt ++;
			ans += (1 << i);
			while(!q[cnt & 1].empty())
			{
				int x = q[cnt & 1].front();
				q[cnt & 1].pop();
				if(x & (1 << i))
				{
					q[1 - (cnt & 1)].push(x);
				}
				else
				{
					int bit = 0;
					while(x)
					{
						if(x & 1)
						{
							num[bit] --;
						}
						x >>= 1;
						bit ++;
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}

