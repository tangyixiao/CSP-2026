#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],d,l,r,t,ans;
char c[200005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		d+=a[i];
	}
	d/=2;
	l=1;
	r=n;
	while(d>0){
		int k=min({a[l],a[r],d});
		if(c[l]!=c[r]){
			ans+=k;
		}
		a[l]-=k;
		a[r]-=k;
		d-=k;
		if(a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
	}
	cout<<ans;
	return 0;
}