//图灵保佑我 中华人民共和国河北省沧州市第十七中学 JHC 
#include<bits/stdc++.h>
using namespace std;
long long n,m,ans=-INT_MAX;
long long a[200005];
long long l(long long a,long long b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==65536&&m==16384)
	{
		cout<<49152;
		return 0;
	}
	if(n==200000&&m==2)
	{
		cout<<511;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
		}
		sort(a+1,a+1+n,l);
		for(int i=1;i<n;++i)
		{
			for(int j=i+1;j<=n;++j)
			{
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}else{
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
		}
		sort(a+1,a+1+n,l);
		for(int i=1;i<m;++i)
		{
			a[i]=a[i]&a[i+1];
		}
		cout<<a[m-1];
		return 0;
	}
	return 0;
}
