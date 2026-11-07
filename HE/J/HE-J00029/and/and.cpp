#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ma;
int ff(int x,int t)
{
	int y=x,i=0,sum=0,j=0,z=t;
	int s[40],ss[40],c[40];
	while(y!=0)
	{
		s[++i]=y%2;
		y/=2;
	}
	/*for(int l=1;l<=i;l++)
	{
		sum+=s[l]*pow(10,l-1);
	}*/
	while(z!=0)
	{
		ss[++j]=z%2;
		z/=2;
	}
	//cout << s[1] << " " << ss[1];
	for(int l=1;l<=min(i,j);l++)
	{
		if(s[l]==1&&ss[l]==1) c[l]=1;
		else c[l]=0;
	}
	for(int l=1;l<=min(i,j);l++)
	{
		sum+=c[l]*pow(2,l-1);
	}
	return sum;
}
int main()
{
	bool iss=1;
	int ans;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ma=max(ma,a[i]);
	}
	if(m==1) 
	{
		cout << ma;
		ma=0;
	}
	else if(m==n) 
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ff(ans,a[i]);
		}
		cout << ans;
		ans=0;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				ma=max(ma,ff(a[i],a[j]));
			}
		}
		cout << ma;
		ma=0;
	}
	else if(m==n-1)
	{
		for(int i=1;i<=n;i++)
		{
			if(i==1) ans=a[2];
			else ans=a[1];
			for(int j=i+1;j<=n;j++)
			{
				if(j==i) break;
				else ans=ff(ans,a[j]);
			}
			ma=max(ans,ma);
		}
		cout << ma;
		ma=0,ans=0;
	}
	else
	{
		ans=a[n-m+1];
		sort(a+1,a+n+1);
		cout << ff(a[n-m+1],a[n-m+2]);
	}
	return 0;
}

