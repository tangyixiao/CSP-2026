#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		x=x*10+(ch-'0');
		ch=getchar();
	}
	return f*x;
}
int n;
int a[200010];
char c[200010];
int aa[1000010];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i]>>c[i];
	int cnt=0;
	int p=1,q=n;
	while(p<q)
	{
		aa[++cnt]=min(a[q],a[p]);
		if(c[q]==c[p])
		{
			--cnt;
			if(a[p]>a[q])
				a[p]-=a[q],q--;
			else a[q]-=a[p],p++;
		}
		else
		{
			if(a[p]>a[q])
				a[p]-=a[q],q--;
			else if(a[q]>a[p])
				a[q]-=a[p],p++;
			else q--,p++;
		}
	}
	int ans=0;
	//p==q
	for(int i=1;i<=cnt;++i)
		ans+=aa[i];
	cout<<ans;
	return 0;
}
