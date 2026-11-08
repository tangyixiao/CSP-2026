#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=2e5+5;
const ll mod=1e9+7;
const ll inf=0x3f3f3f3f3f3f3f3f;
struct f{
	ll l,r;
	char c;
}a[maxn];
ll n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll to=0;
	for(int i=1;i<=n;i++){
		ll x;
		char c;
		cin>>x>>c;
		a[i].c=c;
		a[i].l=to;
		to+=x;
		a[i].r=to-1;
	}
	ll ans=0;
	ll l=1,r=n;
	ll t=0;
	bool f=0;
	to--;
	while(t<to/2){
		if(to-a[l].r>a[r].l){
			if(a[l].c!=a[r].c){
				ans+=a[l].r-t+1;
			}
			t=min(a[l].r+1,to/2);
			l++;
		}else if(to-a[l].r<a[r].l){
			if(a[l].c!=a[r].c){
				ans+=to-t-a[r].l+1;
			}
			t=min(to-a[r].l+1,to/2);
			r--;
		}else{
			if(a[l].c!=a[r].c){
				ans+=a[l].r-t+1;
			}
			t=min(a[l].r+1,to/2);
			l++;
			r--;
		}
		//cout<<t<<' '<<l<<' '<<r<<' '<<ans<<endl;
	}
	cout<<ans;
	return 0;
}

