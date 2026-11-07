#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+10;
ll n,a[N],pre[N],suf[N];
char c[N];	
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>c[i];
		sum+=a[i];
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=n;i>=1;i--) {
		suf[i]=suf[i+1]+a[i];
	}
	ll l=0,r=sum+1,ans=0;
	for(int i=1,j=n;i<=j;i++,j--) {
		if(l>=r) break;
		if(c[i]!=c[j]) {
			if(abs(i-j)!=1) ans+=max(a[i],a[j]);
			if(a[i]<a[j]) {
				l+=a[j],r-=a[j];
			} else {
				l+=a[i],r-=a[i];
			}
		} else {
			if(abs(i-j)!=1) ans+=abs(a[i]-a[j]);
			if(a[i]<a[j]) {
				l+=a[j];
				r-=a[j];
			} else {
				l+=a[i];
				r-=a[i];
			}
		}
	}
	cout<<ans;
	return 0;
}
