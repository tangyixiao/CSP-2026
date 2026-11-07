#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1000005;
LL n,x[N];
char d[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	LL s=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>d[i];
		s+=x[i];
	}
	LL p=s>>1;
	LL h=0,ct;
	for(int i=1;i<=n;i++)
	{
		h+=x[i];
		if(h>=p)
		{
			ct=i;
			break;
		}
	}
	//cout<<ct;
	LL i=0;
	LL l=1,r=n,ans=0;
	while(l<r)
	{
		int f=0;
		//cout<<l<<" "<<r<<' ';
		if(l>ct || r<ct)break;
		if(d[l]!=d[r])
		{
			f=1;
		}
		if(x[l]<x[r])
		{
			i+=x[l];
			if(f)ans+=x[l];
			x[r]-=x[l];
			l++;
		}
		else if(x[l]>x[r])
		{
			i+=x[r];
			x[l]-=x[r];
			if(f)ans+=x[r];
			r--;
		}
		else
		{
			i+=x[l];
			if(f)ans+=x[l];
			r--;
			l++;
		}
		//cout<<i<<' '<<ans<<'\n';
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
