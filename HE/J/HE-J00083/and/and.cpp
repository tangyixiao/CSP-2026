#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10;

ll n,m,a[N],tmp[N],tot,ans;

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	ll r=n;
	for(int i=30;~i;i--){
		
		ll cnt=0;
		for(int j=1;j<=r;j++) if((a[j]>>i)&1) cnt++;
		
		if(cnt<m) continue;
		
		ans+=(1ll<<i),tot=0;
		for(int j=1;j<=r;j++) if((a[j]>>i)&1) tmp[++tot]=a[j];
		
		r=tot;
		for(int j=1;j<=tot;j++) a[j]=tmp[j];
	}
	
	cout<<ans<<'\n';
	
	return 0;
}

/*
9:08 meow!
*/
