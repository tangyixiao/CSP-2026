#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[200005],ans,k,sum;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	ll l=1,r=n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}sum/=2;
	while(k<sum){
		ll s=min(a[l],a[r]);
		if(c[l]==c[r]){
			a[l]-=s;
			a[r]-=s;
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}else{
			ans+=s;
			a[l]-=s;
			a[r]-=s;
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}k+=s;
	}cout<<ans;
	return 0;
}
