#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,w[N],wz;
long long a[N],ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	if (m==n)
	{
		ans=a[1];
		for (int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout << ans;
		return 0;
	}
	if (m==1)
	{
		for (int i=1;i<=n;i++)
		{
			ans=max(ans,a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m==2)
	{
		for (int i=1;i<n;i++)
		{
			long long x=a[i];
			for (int j=i+1;j<=n;j++)
			{
				ans=max(ans,x&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if (m==n-1)
	{
		long long mx=0;
		ans=a[1];
		for (int i=2;i<=n;i++)
		{
			if ((ans-(ans&a[i]))>mx)
			{
				wz=i;
			}
			ans&=a[i];
		}
		ans=a[1];
		for (int i=2;i<=n;i++)
		{
			if (i==wz)
			{
				continue;
			}
			ans&=a[i];
		}
		long long ans2=a[2];
		for (int i=3;i<=n;i++)
		{
			ans2&=a[i];
		}
		cout << max(ans,ans2);
		return 0;
	}
	if (n<=50000)
	{
		for (int i=1;i<n;i++)
		{
			long long x=a[i];
			for (int j=i+1;j<=n;j++)
			{
				if ((x&a[j])>ans)
				{
					w[1]=i;
					w[2]=j;
					ans=x&a[j];
				}
			}
		}
		m-=2;
		wz=2;
		while(m--)
		{
			wz++;
			long long mx=0;
			for (int i=1;i<=n;i++)
			{
				int t=-1;
				for (int k=1;k<=wz;k++)
				{
					if (w[k]==i)
					{
						t=0;
						break;
					}
				}
				if (t==-1)
				{
					if ((a[i]&ans)>mx)
					{
						mx=a[i]&ans;
						w[wz]=i;
					}
				}
			}
			ans=mx;
		}
		cout << ans;
		return 0;
	}
	cout << "0";
	return 0;
}