#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
using namespace std;
int n,m,cnt,ans,a[400005];
size_t i1,i2,i3;
void find_ans(int l_r,int cnt,int deep)
{
	if(deep==1)
	{
		for(int i1=1;i1<l_r;i1++)
		{
			ans=max(ans,cnt&a[i1]);
		}
		return;
	}
	for(int i1=1;i1<l_r;i1++)
	{
		find_ans(i1,cnt&a[i1],deep-1);
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n)
	{
		cin>>ans;
		for(i1=2;i1<=n;i1++)
		{
			cin>>a[i1];
			ans&=a[i1];
		}
		cout<<ans;
	}
	else if(m==1)
	{
		ans=-0x3b9aca00;
		for(i1=1;i1<=n;i1++)
		{
			cin>>a[i1];
			ans=max(ans,a[i1]);
		}
		cout<<ans;
	}
	else if(m==(n-1))
	{
		ans=-0x3b9aca00;
		for(i1=1;i1<=n;i1++)
		{
			cin>>a[i1];
		}
		for(i1=1;i1<=n;i1++)
		{
			cnt=0;
			for(i2=1;i2<=n;i2++)
			{
				if(i1==i2)
				{
					continue;
				}
				if(!cnt)
				{
					cnt=a[i2];
				}
				else
				{
					cnt&=a[i2];
				}
			}
			ans=max(ans,cnt);
		}
		cout<<ans;
	}
	else if(m==2)
	{
		ans=-0x3b9aca00;
		for(i1=1;i1<=n;i1++)
		{
			cin>>a[i1];
		}
		for(i1=1;i1<=n;i1++)
		{
			for(i2=1;i2<i1;i2++)
			{
				ans=max(ans,a[i1]&a[i2]);
			}
		}
		cout<<ans;
	}
	else if(m==3)
	{
		ans=-0x3b9aca00;
		for(i1=1;i1<=n;i1++)
		{
			cin>>a[i1];
		}
		for(i1=1;i1<=n;i1++)
		{
			for(i2=1;i2<i1;i2++)
			{
				for(i3=1;i3<i2;i3++)
				{
					ans=max(ans,a[i1]&a[i2]&a[i3]);
				}
			}
		}
		cout<<ans;
	}
	else
	{
		ans=-0x3b9aca00;
		for(i1=1;i1<=n;i1++)
		{
			find_ans(i1,a[i1],m-1);
		}
		cout<<ans;
	}
	return 0;
}
