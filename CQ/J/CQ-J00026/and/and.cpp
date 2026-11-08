#include<bits/stdc++.h>
using namespace std;
int n, m, max_n;
int a[200005]={};
int x;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if(m==2)
	{
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				x=a[i]&a[j];
				if(max_n<x) max_n=x;
			}
		}
		cout << max_n;
		return 0;
	}
	if(m==3)
	{
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				for(int q=j+1; q<=n; q++)
				{
					x=a[i]&a[j]&a[q];
					if(max_n<x) max_n=x;
				}
			}
		}
		cout << max_n;
		return 0;
	}
	if(m==4)
	{
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				for(int q=j+1; q<=n; q++)
				{
					for(int w=q+1; w<=n; w++)
					{
						x=a[i]&a[j]&a[q]&a[w];
						if(max_n<x) max_n=x;
					}
				}
			}
		}
		cout << max_n;
		return 0;
	}
	if(m==5)
	{
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				for(int q=j+1; q<=n; q++)
				{
					for(int w=q+1; w<=n; w++)
					{
						for(int e=w+1; e<=n; e++)
						{
							x=a[i]&a[j]&a[q]&a[w]&a[e];
							if(max_n<x) max_n=x;
						}
					}
				}
			}
		}
		cout << max_n;
		return 0;
	}
	if(m==6)
	{
		for(int i=1; i<=n; i++) cin >> a[i];
		for(int i=1; i<=n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				for(int q=j+1; q<=n; q++)
				{
					for(int w=q+1; w<=n; w++)
					{
						for(int e=w+1; e<=n; e++)
						{
							for(int r=e+1; r<=n; r++)
							{
							x=a[i]&a[j]&a[q]&a[w]&a[e]&a[r];
							if(max_n<x) max_n=x;
							}
						}
					}
				}
			}
		}
		cout << max_n;
		return 0;
	}
}
