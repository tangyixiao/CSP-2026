#include<bits/stdc++.h>
#define ll int64_t
#define endl '\n'
using namespace std;
ll n,a[200000+10],ans=0;
char c[200000+10];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i]>>c[i];
	ll l=1,r=n;
	while(l<r){
		if(a[l]>a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			a[r]-=a[l];
			l++;
		}
		else if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}