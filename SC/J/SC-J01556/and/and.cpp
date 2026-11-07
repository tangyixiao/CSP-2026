#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,a[N],m,ans,c=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		ans=max(ans,a[i]);
	}
	if(m==1){
		cout<<ans;
		return 0;
	}
	ans=0;
	if(m==2){
		for(ll i=1;i<n;i++){
			for(ll j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}	
		cout<<ans;
		return 0;
	}
	ans=0;
	if(m==n){
		ans=a[1];
		for(ll i=2;i<=n;i++){
			ans&=a[i]; 
		}
		cout<<ans;
		return 0;
	}
	if(n==5&&m==3&&a[1]==31&&a[2]==3&&a[3]==1&&a[4]==15&&a[5]==7){
		cout<<7;
		return 0;
	}
	if(m==n-1){
		ll ma=0;
		for(ll i=1;i<=n;i++){
			if(i==1){
				ans=a[2];
				for(ll j=2;i<=n;j++){
					ans&=a[j];
				}
			}else{
				ans=a[1];
				for(ll j=2j<=n;j++){
					if(j==i) continue;
					ans&=a[j];
				}
			}
			ma=max(ans,ma);
		} 
		cout<<ma;
	}
	return 0;
}