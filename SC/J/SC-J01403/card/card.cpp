#include <bits/stdc++.h>

using namespace std;

int m,n,c,a[500005],cnt[300005],s[500005];

bool fc(int k)
{
	for(int i = 1;i <= n;i++)
	{
		if(s[i] == k)
		{
			c = i;
			return true;
		}
		if(s[i] == 0)
		{
			return false;
		}
	}
}

void cl(int c,int k)
{
	for(int i = c;i <= k;i++)
	{
		s[i] == 0; 
	}
}

void ca(int k)
{
	for(int i = k;i <= n;i++)
	{
		if(fc(a[i]))
		{
			cl(c,i);
		}
		else
		{
			s[i] = a[i];
		}
	}
}

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		ca(i);
		for(int j = 1;j <= n;j++)
		{
			if(a[j] <= 0)
			{
				break;
			}
			cnt[a[j]]++;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
 } 