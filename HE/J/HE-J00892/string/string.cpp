#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[200005];
int l,r,ss,pei,ans,ll,rr;
char s[200005];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>s[i];
		ss+=a[i];
	}
	l=1,r=n;
	ll=0,rr=0;
	while(l<r)
	{
		int x=min(ll+a[l],rr+a[r]);
		
		if(s[l]!=s[r])
			ans+=x-pei;
		pei=x;
		if(ll+a[l]<rr+a[r])
			ll+=a[l],l++;
		else if(ll+a[l]>rr+a[r])
			rr+=a[r],r--;
		else if(ll+a[l]==rr+a[r])
			ll+=a[l],l++,rr+=a[r],r--;
		//cout<<l<<" "<<r<<" "<<x<<" "<<pei<<" "<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
