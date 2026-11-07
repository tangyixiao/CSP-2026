#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,op=0,sum=0;
ll c[200010],s[200010],mid=0,cnt=0;
char sd[200010];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	cin>>n;
	s[0]=0;
	for(int i=1; i<=n; i++) {
		cin>>c[i]>>sd[i];
		s[i]+=s[i-1]+c[i];
		sum+=c[i];
	}
	for(int i=1;i<=n;i++){
		if(s[i]>sum/2){
			mid=i-1;
			break;
		}
	}
	for(int l=1,r=n; l<r; l++,r--) {
		if(l==r) break;
		ll yu=min(c[l],c[r]);
		c[l]-=yu,c[r]-=yu;
		if(sd[l]!=sd[r]) {
			op+=yu;
		}
		int k=1;
		if(c[l]==0)cnt++;
		if(c[r]==0)cnt++;
		while(c[l]) {
			if(l==r-k) break;
			int as=min(c[l],c[r-k]);
			c[l]-=as,c[r-k]-=as;
			if(sd[l]!=sd[r-k])op+=as;
			k++;
		}
		k=1;
		while(c[r]) {
			if(r==l+k) break;
			int as=min(c[r],c[l+k]);
			c[r]-=as,c[l+k]-=as;
			if(sd[r]!=sd[l+k]) op+=as;
			k++;
		}
	}
	cout<<op;
	return 0;
}