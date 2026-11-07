#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200010;
int n,a[N],ans=0;
char c[N],m[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cnt+=a[i];
		m[i]=m[i]+a[i];
	}
	int l=1,r=cnt;
	int l2=1,r2=n;
	while(l<r)
	{
		if(l>m[l2])
		{
			l2++;
		}
		if(r<cnt-m[r2]+1)
		{
			r2--;
		}
		if(c[l2]!=c[r2])
		{
			ans++;
		}
		l++,r--;
	}
	cout<<ans;
	return 0;
}