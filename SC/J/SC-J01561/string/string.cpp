// 8:50 Lao zi zuo T2 de shi jian bi T1 hai kuai,zhe me shun li ma..

#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+10;
ll n,ans=0,len;
ll a[N],lea[N];
char c[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
		lea[i]=a[i];
	}
	ll l=1,r=n;
	while(l!=r&&len!=0){
		ll k=min(lea[l],lea[r]);
		if(c[l]==c[r]){
			ans+=0;//滚木
			lea[l]-=k,lea[r]-=k;
			len-=2*k;
			if(lea[l]==0) l++;
			if(lea[r]==0) r--;
		}else{
			ans+=k;
			lea[l]-=k,lea[r]-=k;
			len-=2*k;
			if(lea[l]==0) l++;
			if(lea[r]==0) r--;
		}
	}
	cout<<ans;
	return 0;
}