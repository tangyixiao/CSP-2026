#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll N=2e5+20;
ll a[N];
ll n;
ll m;
ll dp[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}	
	for(ll i=1;i<=n;i++){
		for(ll j=m;j>=1;j--){
			ll f=a[i];
			ll maxi=0;
			ll fc=1;
			ll maxn=dp[j-1];
			if(j==1)maxn=a[i];
			while(f>0){
				if(maxn%2==1&&f%2==1){
					maxi+=fc;
				}
				fc*=2;
				f/=2;
				maxn/=2;
			}
			dp[j]=max(dp[j],maxi);
		}
	}
cout<<dp[m];
	return 0;
}


