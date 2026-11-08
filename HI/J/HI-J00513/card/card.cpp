#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[10000000];
int b[1000000];
bool c[1000000];
int ans[1000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	
	int l = 1;
	int r = 0;
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;j <= n;j++)
		{
			if(c[a[j]] == 0)
			{
				c[a[j]] = 1;
				r++;
				b[r] = a[j];
			}
			else
			{
				while(1)
				{
					if(b[r] == a[j])
						break;
					else
						r--;
				}
			}
		}
		
		for(int j = 1;j <= r;j++)
		{
			ans[b[j]]++;
		}
	}
	
	for(int i = 1;i <= m;i++)
	{
		cout<<ans[i]<<" ";
	}

}
