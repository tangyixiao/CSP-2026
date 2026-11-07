#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;

int n,m;
int a[maxn];
int cnt=0,ans=0,id=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>a[i];
	if(m==1) 
	{
		for(int i = 1;i <= n;i++) if(ans<a[i]) ans=a[i];
		cout<<ans<<endl;
	}
	else if(m==2)
	{
		for(int i = 1;i <= n;i++)
		{
			for(int j = i+1;j <= n;j++)
			{
				if(a[i]&a[j]>ans) ans=a[i]&a[j];
			 } 
		}
		cout<<ans<<endl;
	}
	else if(m==n)
	{
		ans=a[1];
		for(int i = 2;i <= n;i++) ans&=a[i];
		cout<<ans<<endl;
	}
	else if(m==n-1)
	{
		int minn=INT_MAX;
		for(int i = 1;i <= n;i++)
		{
			if(a[i]<minn) minn=a[i];
		}
		if(a[1]!=minn)
		{
			ans=a[1];
			for(int i = 2;i <= n;i++)
			{
				if(a[i]!=minn) ans&=a[i];
			} 
			cout<<ans<<endl;
		}
		else 
		{
			ans=a[2];
			for(int i = 3;i <= n;i++) ans&=a[i];
			cout<<ans<<endl;
		}
	}
	return 0;
} 
