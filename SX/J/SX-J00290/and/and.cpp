#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const int N=2e5+5;
ll n,m,lst;
bool f;
struct node
{
	string s;
	ll sum,num;
}a[N];
string ejz(ll x)
{
	string s="";
	while(x)
	{
		if(x%2==1) s='1'+s;
		else s='0'+s;
		x/=2;
	}
	return s;
}
ll add(ll x)
{
	ll ans=0;
	while(x)
	{
		ans+=x%2;
		x/=2;
	}
	return ans;
}
bool cmp(node x,node y)
{
	if(x.sum!=y.sum) return x.sum>y.sum;
	return x.num>y.num;
}
bool check(ll x)
{
	string tmp=ejz(x);
	ll tmp_sum=0,len=tmp.size();
	for(int i=0;i<len;i++)
		if(tmp[i]=='1') tmp_sum++;
	return tmp_sum==1;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		if(i>1&&x-lst!=1) f=1;
		a[i].s=ejz(x);
		a[i].sum=add(x);
		a[i].num=x;
		lst=x;
	}
	sort(a+1,a+1+n,cmp);
	if(!f&&check(n)) cout<<n-m;
	else cout<<a[m].num;
	return 0;
}
