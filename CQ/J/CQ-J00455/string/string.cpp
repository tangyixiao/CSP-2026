#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,a[N],ans,sum[N];
char c[N];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for (int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i];
	int s=0,id=0,mid=(sum[n]+1)/2;
	for (int i=1;i<=n;i++) {
		if (sum[i]>=mid) {
			id=i;
			break;
		}
	}
	int s1=mid-sum[id-1]-(sum[n]%2),s2=sum[id]-mid,l=id,r=id;
	char c1=c[id],c2=c[id];
	while (l!=-1 && r!=n+2) {
		if (s1==0) {
			l--;
			c1=c[l];
			s1=a[l];
		}
		if (s2==0) {
			r++;
			c2=c[r];
			s2=a[r];
		}
		int t=min(s1,s2);
		if (c1!=c2) ans+=t;
		s1-=t;
		s2-=t;	
	}
	cout<<ans;
	return 0;
}
