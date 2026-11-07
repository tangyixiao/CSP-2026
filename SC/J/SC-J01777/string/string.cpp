#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,L;
struct node
{
	int len,op;
	char c;
};
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	vector<node> a(200005);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].len>>a[i].c;
		L+=a[i].len;
		a[i].op=0;
	}
	if(L&1)
	{
		int R=L/2,now=0,flag=0,idx;
		vector<node> b;
		for(int i=1;i<=n;i++)
		{
			if(flag==0)
			{
				if(now+a[i].len<=R) b.push_back(a[i]),now+=a[i].len;
				else
				{
					int delta=R-now;
					if(delta!=0) b.push_back({delta,0,a[i].c});
					b.push_back({1,1,a[i].c});
					idx=b.size()-1;
					if(a[i].len-delta-1!=0) b.push_back({a[i].len-delta-1,0,a[i].c});
					now+=a[i].len;
					flag=1;
				}
			}else b.push_back(a[i]),now+=a[i].len;
		}
		int ans=0,l=idx-1,r=idx+1,reml=b[l].len,remr=b[r].len;
		while(l>=0&&r<b.size())
		{
			if(reml>=remr)
			{
				if(b[l].c!=b[r].c) ans+=remr;
				reml-=remr;
				remr=b[++r].len;
			}else
			{
				if(b[l].c!=b[r].c) ans+=reml;
				remr-=reml;
				reml=b[--l].len;
			}
		}
		cout<<ans;
	}else
	{
		int R=L/2,now=0,flag=0,idx;
		vector<node> b;
		for(int i=1;i<=n;i++)
		{
			if(flag==0)
			{
				if(now+a[i].len<=R) b.push_back(a[i]),now+=a[i].len;
				else
				{
					int delta=R-now;
					if(delta!=0) b.push_back({delta,0,a[i].c});
					idx=b.size()-1;
					if(a[i].len-delta!=0) b.push_back({a[i].len-delta,0,a[i].c});
					now+=a[i].len;
					flag=1;
				}
			}else b.push_back(a[i]),now+=a[i].len;
		}
		int ans=0,l=idx,r=idx+1,reml=b[l].len,remr=b[r].len;
		while(l>=0&&r<b.size())
		{
			if(reml>=remr)
			{
				if(b[l].c!=b[r].c) ans+=remr;
				reml-=remr;
				remr=b[++r].len;
			}else
			{
				if(b[l].c!=b[r].c) ans+=reml;
				remr-=reml;
				reml=b[--l].len;
			}
		}
		cout<<ans;
	} 
	return 0;
}
/*
exp:100pts
writer:1419936
*/