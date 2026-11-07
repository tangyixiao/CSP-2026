#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p[109];
ll n,m,a[200009],ok[200009],ans;
void Cnt2(ll x){
	while(x){
		ll i=log((x&(-x)))/log(2);
		p[i]++;
		x-=(x&(-x));
	}
}
void erare2(ll x){
	while(x){
		ll i=log((x&(-x)))/log(2);
		p[i]--;
		x-=(x&(-x));
	}
}
void clean(ll x){
	for(int i=1;i<=n;i++){
		if(!ok[i])continue;
		if(!((a[i]>>x)%2)){
			erare2(a[i]);
			ok[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		Cnt2(a[i]);
		ok[i]=1;
	}
	for(int i=31;i>=0;i--){
		if(p[i]>=m){ans+=(1<<i),clean(i);}
	}
	cout<<ans;
	return 0;
}
