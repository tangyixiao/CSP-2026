#include<bits/stdc++.h>
#define LL long long
#define IC ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
const LL N=2e5+5;
LL n,a[N],l=1,r,ans;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	IC
	cin>>n;
	for(LL i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		r+=a[i];
	}
	LL i=1,j=n;
	while(l<=r)
	{
		LL len=min(a[i],a[j]);
		a[i]-=len;
		a[j]-=len;
		l+=len;
		r-=len;
		if(c[i]!=c[j]) ans+=len;
		if(!a[i]) i++;
		if(!a[j]) j--;
	}
	cout<<ans;
	return 0;
}