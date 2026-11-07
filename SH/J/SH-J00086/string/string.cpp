#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef double db;
const ll N=2e5+9,INF=0x3f3f3f3f;
ll n,len,a[N]; char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i]; len+=a[i];
	}
	ll l=1,r=n,ans=0;
	while(l<=r){
		if(a[l]==a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			l++; r--; continue;
		}
		if(a[l]>a[r]){
			if(c[l]!=c[r]) ans+=a[r];
			a[l]-=a[r]; r--; continue;
		}
		if(a[l]<a[r]){
			if(c[l]!=c[r]) ans+=a[l];
			a[r]-=a[l]; l++; continue;
		}
	}
	cout<<ans<<endl;
	return 0;
}
//sto xiaoR&xiaoX orz
