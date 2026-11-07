#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct duan
{
	ll a;
	char c;
	duan()
	{
		c=' ';
	}
}D[200005];
ll n,len,ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>D[i].a>>D[i].c;
		len+=D[i].a;
		if(D[i-1].c==D[i].c)
		{
			D[i-1].a+=D[i].a;
			i--;
			n--;
		}
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n/2;i++)
	{
		int j=n-i+1;

		if(D[i].c!=D[j].c)
		{
			ans+=D[i].a;
		}
		else
		{
			ll cha=D[i].a-D[j].a;
		}if(cha<0) D[j-1].a-=abs(cha);
			if(cha>0) D[i+1].a-=cha;
	}
	cout<<ans;
	return 0;
}