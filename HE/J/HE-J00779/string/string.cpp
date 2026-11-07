#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2*1e5+100;
ll n;
ll sum=0;
ll a[N];
string f;
ll ans;
char c;

bool kk(ll k)
{
	for(int i=1,j=k;i<=k/2,j>=k-k/2+1;i++,j--)
	{
		if(f[i-1]!=f[j-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		cin>>c;
		for(ll j=1;j<=a[i];j++)
		{
			f+=c;
		}
       sum+=a[i];
	}
	if(kk(sum)==1)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<=sum;i++)
	{
		if(kk(i)) ans+=1;
	}

	if(ans==sum)
	{
		cout<<0;
		return 0;
	}
	else
	{
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
