#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin>>n>>m;
	int a[n+5]={};
	int better[m+5]={};
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=n; i++)
	{
		int now[m+5]={};
		int os[n+5]={};
		for(int j=i; j<=n; j++)
		{
			os[j-i+1]=a[j];
			for(int x=1; x<=j-i; x++)
			{
				if(os[x]==os[j-i+1])
				{
					for(int y=x; y<=j-i; y++)
					{
						now[os[y]] = 0;
						os[y]=os[y+j-i+1];
					}
				}
			}
			now[a[j]]=1;
		}
		for(int j=1; j<=m; j++)
		{
			better[j]+=now[j];
		}
	}
	for(int i=1; i<=m; i++)
	{
		cout << better[i] << ' ';
	}
	return 0;
}
