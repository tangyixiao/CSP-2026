#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,m,a[N],sum[N],len,l,r,sl,sr,ans;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n;
	char pr='+';
	for(int i=1;i<=n;i++)
	{
		int b;
		char d;
		cin>>b>>d;
		if(d==pr)
		{
			a[m]+=b;
		}
		else
		{
			m++;
			a[m]=b;
			c[m]=d;
			pr=d;
		}
		len+=b;
	}
	l=1,r=len,sl=1,sr=m;
	for(int i=1;i<=m;i++)
	{
		sum[i]=sum[i-1]+a[i];
	}
	while(l<=r)
	{
		if(sl==sr)
		{
			break;
		}
		ll nl=sum[sl]+1,nr=sum[sr-1];
		if(nl-l>r-nr)
		{
			if(c[sr]!=c[sl])
			{
				ans+=r-nr;
			}
			l+=r-nr;
			r=nr;
			sr--;
		}
		else if(nl-l<r-nr)
		{
			if(c[sr]!=c[sl])
			{
				ans+=nl-l;
			}
			r-=nl-l;
			l=nl;
			sl++;
		}
		else
		{
			if(c[sr]!=c[sl])
			{
				ans+=nl-l; 
			}
			l=nl;
			r=nr;
			sl++;
			sr--;
		}
	}
	cout<<ans;
	return 0;
}