#include<bits/stdc++.h>
using namespace  std;
#define ll long long
ll a[2000010];
ll c[1000010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n,m;
	cin>>n>>m;
	bool ddd=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) ddd =false;
	}
	
	if(ddd==true){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(a[j]==a[j-1]) continue;
				c[a[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<c[i]<<" ";
		}
	}
	
	return 0;
}