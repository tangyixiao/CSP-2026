#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+3;
int n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i]>>c[i];
	ll ans=0;
	for(int l=1,r=n;l<r;){
		int t=min(a[l],a[r]);
		if(c[l]!=c[r])	ans+=t;
		a[l]-=t,a[r]-=t;
		if(!a[l])	l++;
		if(!a[r])	r--;
	}
	cout<<ans;
	return 0;
}