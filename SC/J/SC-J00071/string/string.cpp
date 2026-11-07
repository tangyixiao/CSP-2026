#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10;

ll n,a[N];
char c[N];
ll sum=1,ans;
ll l[N],r[N];
ll q,p;
ll jq,jp,mn;

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		l[i]=sum;
		sum+=a[i];
		r[i]=sum-1;
	}
	q=1,p=r[n];
	ll i=1,j=n;
	while(q<=sum/2 && p>=(sum+1)/2)
	{
		jq=r[i]-q,jp=p-l[j];
		mn=min(jq,jp)+1;
		q+=mn;
		p-=mn;
		if(c[i]!=c[j]) ans+=mn;
		if(q>r[i]) i++;
		if(p<l[j]) j--;
	}
	cout << ans << "\n";
	return 0;
}