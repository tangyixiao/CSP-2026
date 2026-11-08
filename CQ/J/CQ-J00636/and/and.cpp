#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,sum=2147483647,m,a[N],ans=2147483647;
namespace did{
	signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];		
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		if(i!=1)sum=sum&a[i];
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		cout<<(sum&a[1]);
		return 0;
	}
	if(m==n-1)
	{
		cout<<sum;
		return 0;
	}
	if(m=2)
	{
		int res=0;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				res=max(res,a[i]&a[j]);
		cout<<res;
		return 0;
	}
	for(int i=n;i>=n-m+1;i--)ans=ans&a[i];
	cout<<ans;
	return 0;
}
}
signed main()
{
	did::main();
	return 0;
}
//¹À·Ö:50
//¸´ÔÓ¶È:O(n) 
