#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,a[200005],len,ans,l11[200005],r11[200005],l22[200005],r22[200005];
char c[200005],c11[200005],c22[200005];
ll L,R,sk[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;++i) {
		cin>>a[i]>>c[i];
		len+=a[i];
		sk[i]=sk[i-1]+a[i];
	}
	for (int i=1;i<=n;++i) {
		if (sk[i]-a[i]+1<=len/2 && sk[i]<=len/2) {
			l11[++L]=sk[i]-a[i]+1;
			r11[L]=sk[i];
			c11[L]=c[i];
		}
		else if (sk[i]-a[i]+1<=len/2 && sk[i]>len/2){
			l11[++L]=sk[i]-a[i]+1;
			r11[L]=len/2;
			c11[L]=c[i];
			r22[++R]=len-(len/2+1)+1;
			l22[R]=len-sk[i]+1;
			c22[R]=c[i];
		}
		else {
			ll L1=sk[i]-a[i]+1,R1=sk[i];
			l22[++R]=len-R1+1;
			r22[R]=len-L1+1;
			c22[R]=c[i];
		}
	}
	ll j=R;
	ll i=1;
	while (j>=1 || i<=L) {
		while (l11[i]>=l22[j] && r11[i]<=r22[j]) {
			if (c11[i]!=c22[j]) ans+=r11[i]-l11[i]+1;
			i++;
		}
		if (i>L || j<1) break;
		if (l11[i]<=l22[j] && r11[i]<=r22[j]) {
			if (c11[i]!=c22[j]) ans+=r11[i]-l22[j]+1;
			i++;
		}
		if (i>L || j<1) break;
		if (l11[i]>=l22[j] && r11[i]>=r22[j]) {
			if (c11[i]!=c22[j]) ans+=r22[j]-l11[i]+1;
			j--;
		}
		if (i>L || j<1) break;
		while (l11[i]<=l22[j] && r11[i]>=r22[j]) {
			if (c11[i]!=c22[j]) ans+=r22[j]-l22[j]+1;
			j--;
		}
		if (i>L || j<1) break;
	}
	cout<<ans<<endl;
	return 0;
}

