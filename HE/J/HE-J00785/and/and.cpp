#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<0;
		return 0;
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(j!=i){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	cout<<ans;
	
	return 0;
}
