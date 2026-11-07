#include<bits/stdc++.h>
using namespace std;
int ans=0;
int a[200010];
int n,m;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			int t;
			cin>>t;
			ans=max(ans,t);
		}
		cout<<ans;
		return 0;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
		return 0;
	}
	int maxn=0;
	bool sg=true;
	for(int i=1;i<=n;i++)
	{
		int pd=false;
		cin>>a[i];
		maxn=max(maxn,a[i]);
		for(int i=0;i<=20;i++)
		{
			if(a[i]==(int)pow(2,i)-1)
			{
				pd=true;
				break;
			}
		}
		if(!pd)
		{
			sg=false;
		}
	}
	if(maxn<4)
	{
		int t1,t2,t3;
		t1=t2=t3=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==1)
			{
				t2++;
				if(a[i]-1>0)
				{
					t1++;
					t3++;
				}
			}
			else if(a[i]-1>0)
			{
				t3++;
			}
		}
		if(t1>=m)cout<<3;
		else if(t3>=m)cout<<2;
		else if(t2>=m)cout<<1;
		else cout<<0;
	}
	if(sg)
	{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
    return 0;
}