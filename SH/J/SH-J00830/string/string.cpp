#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10;
ll n;
ll a[N];
char c[N];
ll cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	ll d=1;
	c[0]='S';
	ll flag=0;
	for(ll i=1;i<=n;i++){
		cin>>a[d];
		cin>>c[d];
		cnt+=a[d];
		if(c[d]!=c[d-1]){
			d++;
			flag=0;
		}else{
			a[d-1]+=a[d]; 
			flag=1;
		}
	}
	ll y=d+flag;
	ll l=0,r=cnt+1,x=0;
	ll ans=0;
	y--;
	r-=a[y];
	while(l<r-1){
		ll b=cnt+1-r;
		if(l<=b){
			x++;
			l+=a[x];
			if(c[x]!=c[y]){
				if(l<=b){
					ans+=a[x];
				}else{
					ans=ans+a[x]-l+b;
				}
			}
		}else if(b<l){
			y--;
			r-=a[y];
			b=cnt+1-r;
			if(c[x]!=c[y]){
				if(b<=l){
					ans+=a[y];
				}else{
					ans=ans+a[y]-b+l;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
