#include<bits/stdc++.h>
using namespace std;
struct d
{
	long long n;char v;
}a[int(2e5)+10];
unordered_map<char,d> l,r;
int n,p;
long long ln,ll,lr,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].n>>a[i].v;
		ln+=a[i].n;
	}
	while(1)
	{
		if(ll+a[p].n>=ln/2)
		{
			d dt={ln/2-ll,a[p].v};
			if(l[a[p].v].n!=0) l[a[p].v].n+=dt.n;
			else l[a[p].v]=dt;
			ll=ln/2;break;
		}
		else
		{
			if(l[a[p].v].n!=0) l[a[p].v].n+=a[p].n;
			else l[a[p].v]=a[p];
			ll+=a[p++].n;
		}
	}//左侧  
	p=n-1;
	while(1)
	{
		if(lr+a[p].n>=ln/2)
		{
			d dt={ln/2-lr,a[p].v};
			if(r[a[p].v].n!=0) r[a[p].v].n+=dt.n;
			else r[a[p].v]=dt;
			lr=ln/2;break;
		}
		else
		{
			if(r[a[p].v].n!=0) r[a[p].v].n+=a[p].n;
			else r[a[p].v]=a[p];
			lr+=a[p--].n;
		}
	}//右侧
	//reverse(r.begin(),r.end());
	for(int i='a';i<='z';i++)
	{
		ans+=abs(l[i].n-r[i].n);
	}
	cout<<ans/2;
	return 0;
}