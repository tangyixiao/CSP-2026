#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int inf=2e5+5;
ll n,m,a[inf];
ll f[inf];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	f[1]=a[1];
	for(ll i=2;i<=n;i++){
		for(ll j=min(i,m);j>=1;j--){
			if(j>1) f[j]=max(f[j],f[j-1]&a[i]);
			else f[j]=max(f[j],a[i]);
		}
	}
	cout<<f[m];
	return 0;
}

