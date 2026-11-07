#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if (m==1)
	{
		int x,mx=0;
		for (int i=0;i<n;i++)
		{
			cin>>x;
			mx=max(mx,x);
		}
		cout<<mx;
	}
	else if (m==n)
	{
		int x,mx;
		cin>>mx;
		for (int i=1;i<n;i++)
		{
			cin>>x;
			mx=mx&x;
		}
		cout<<mx;
	}
	else if (m==2)
	{
		int a[n],mx=0;
		for (int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for (int i=n-1;i>=1;i--)
			if (a[i]==a[i-1])
			{
				mx=a[i];
				break;
			}
		cout<<max(mx,a[n-1]&a[n-2]);
	}
	else
	{
		int f[m][n],a[n],ans=0;
		bool flag=1,flg=1;
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			if (a[i]!=i-1)
				flag=0;
			if (a[i]>4)
				flg=0;
			f[0][i]=a[i];
		}
		if (flag)
		{
			cout<<(a[n-1]&a[n-2]);
			return 0;
		}
		if (flg)
		{
			int cnt[5]={0};
			for (int i=0;i<n;i++)
				cnt[a[i]]++;
			if (m<=cnt[4])
				cout<<4;
			else if (m<=cnt[2]+cnt[3])
				cout<<2;
			else if (m<=cnt[1]+cnt[3])
				cout<<1;
			cout<<0;
			return 0;
		}
		for (int i=1;i<m;i++)
		{
			for (int j=0;j<n;j++)
			{
				f[i][j]=f[i-1][j]&a[j+1];
				for (int k=j+2;k<n;k++)
					f[i][j]=max(f[i][j],f[i][j]&a[k]);
			}
		}
		for (int i=0;i<n;i++)
			ans=max(ans,f[m][i]);
		cout<<ans;
	}
	return 0;
}
