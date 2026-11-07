#include<bits/stdc++.h>
using namespace std;
#define int long long
long long n,ans;
struct node{
	long long x;
	char c;
}a[200001];
deque<node> d;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].c;
		d.push_back({a[i].x,a[i].c});
	}
	while(d.size()>1)
	{
		node f=d.front();
		node b=d.back();
		if(f.x==b.x&&f.c==b.c)
		{
			d.pop_front();
			d.pop_back();
		}
		if(f.x==b.x&&f.c!=b.c)
		{
			d.pop_front();
			d.pop_back();
			ans+=f.x;
		}
		if(f.x>b.x&&f.c==b.c)
		{
			d.pop_front();
			d.pop_back();
			d.push_front({f.x-b.x,f.c});
		}
		if(f.x<b.x&&f.c==b.c)
		{
			d.pop_front();
			d.pop_back();
			d.push_back({b.x-f.x,f.c});
		}
		if(f.x>b.x&&f.c!=b.c)
		{
			d.pop_front();
			d.pop_back();
			d.push_front({f.x-b.x,f.c});
			ans+=b.x;
		}
		if(f.x<b.x&&f.c!=b.c)
		{
			d.pop_front();
			d.pop_back();
			d.push_back({b.x-f.x,b.c});
			ans+=f.x;
		}
	}
	cout<<ans;
	return 0;
}

