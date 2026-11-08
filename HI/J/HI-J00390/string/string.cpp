#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;

	vector<pair<long long,char> > v;
	for(long long i=1;i<=n;i++)
	{
		long long u;
		char a;
		cin>>u>>a;
		v.push_back(make_pair(u,a));
	}
	long long l=0,r=n-1,ans=0;
	while(l<r)
	{
		int len_l=v[l].first;
		int len_r=v[r].first;
		int chl=v[l].second,chr=v[r].second;
		int T=min(len_l,len_r);
		if(chl!=chr)
			ans+=T;
		v[l].first-=T,v[r].first-=T;
		if(v[l].first==0)l++;
		if(v[r].first==0)r--;
	}
	cout<<ans;
	
	return 0;
}
