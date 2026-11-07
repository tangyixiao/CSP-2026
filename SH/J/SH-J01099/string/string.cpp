#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll l[200005];
ll c[200005];
ll n,ans,num;
int h,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	char ca;
	for(int i=1;i<=n;i++){
		cin>>l[i]>>ca;
		c[i]=ca-'a';
		num+=l[i];
	}
	ll d=min(l[1],l[n]);
	h=1;
	r=n;
	while(num>1){
		ll d=min(l[h],l[r]);
		if(c[h]!=c[r]){
			ans+=d;
		}
		l[h]-=d;
		l[r]-=d;
		num-=2*d;
		if(l[h] == 0) h++;
		if(l[r] == 0) r--;
	}
	cout<<ans;
	return 0;
} 
