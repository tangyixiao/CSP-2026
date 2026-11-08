#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200005],ans=-1;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j)continue;
				ans = max(ans,(a[i]&a[j]));
			}
		}
		cout << ans;
		return 0;
	}
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout << a[n];
		return 0;
	}
	if(m==n)
	{
		ans = a[1];
		for(int i=2;i<=n;i++)
		{
			ans = (ans&a[i]);
		}
		cout << ans;
		return 0;
	}
	if(m==3)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					if(i==j||i==k||j==k)continue;
					ans = max(ans,((a[i]&a[j])&a[k]));
				}
			}
		}
		cout << ans;
		return 0;
	}
	if(m==4)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					for(int g=1;g<=n;g++)
					{
						if(i==j||i==k||j==k||g==i||g==j||g==k)continue;
						ans = max(ans,(((a[i]&a[j])&a[k])&a[g]));
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	if(m==5)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					for(int g=1;g<=n;g++)
					{
						for(int b=1;b<=n;b++)
						{
							if(i==j||i==k||j==k||g==i||g==j||g==k||b==i||b==j||b==k||b==g)continue;
							ans = max(ans,((((a[i]&a[j])&a[k])&a[g])&a[b]));
						}
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	if(m==6)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					for(int g=1;g<=n;g++)
					{
						for(int b=1;b<=n;b++)
						{
							for(int c=1;c<=n;c++)
							{
								if(i==j||i==k||j==k||g==i||g==j||g==k||b==i||b==j||b==k||b==g||c==i||c==j||c==k||c==g||c==b)continue;
								ans = max(ans,(((((a[i]&a[j])&a[k])&a[g])&a[b])&a[c]));
							}
						}
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	if(m==7)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					for(int g=1;g<=n;g++)
					{
						for(int b=1;b<=n;b++)
						{
							for(int c=1;c<=n;c++)
							{
								for(int d=1;d<=n;d++)
								{
									if(i==j||i==k||j==k||g==i||g==j||g==k||b==i||b==j||b==k||b==g||c==i||c==j||c==k||c==g||c==b||d==i||d==j||d==k||d==g||d==b||d==c)continue;
									ans = max(ans,((((((a[i]&a[j])&a[k])&a[g])&a[b])&a[c])&a[d]));
								}
							}
						}
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	if(m==8)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				for(int k=1;k<=n;k++)
				{
					for(int g=1;g<=n;g++)
					{
						for(int b=1;b<=n;b++)
						{
							for(int c=1;c<=n;c++)
							{
								for(int d=1;d<=n;d++)
								{
									for(int e=1;e<=n;e++)
									{
										if(i==j||i==k||j==k||g==i||g==j||g==k||b==i||b==j||b==k||b==g||c==i||c==j||c==k||c==g||c==b||d==i||d==j||d==k||d==g||d==b||d==c||e==i||e==j||e==k||e==g||e==b||e==c||e==d)continue;
										ans = max(ans,(((((((a[i]&a[j])&a[k])&a[g])&a[b])&a[c])&a[d])&a[e]));
									}
								}
							}
						}
					}
				}
			}
		}
		cout << ans;
		return 0;
	}
	return 0;
}
