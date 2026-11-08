#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,a[200005],start[200005],zongchang;
char c[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	a[0]=1;
	for(int i=1;i<=n;i++){
		cin >>a[i]>>c[i];
		zongchang+=a[i];
		start[i]=start[i-1]+a[i-1];
	}
	ll ans=0;
	for(int i=1;i<=n&&start[i]<=zongchang/2;i++){
		ll l=upper_bound(start+1,start+1+n,max(zongchang+1-start[i]-a[i]+1,zongchang/2+1))-start-1;
		ll r=upper_bound(start+1,start+1+n,zongchang+1-start[i])-start-1;
		//cout <<l<<" "<<r<<":"<<start[l]<<" "<<start[r]<<"\n";
		for(int j=l;j<=r;j++){
			//cout <<c[i]<<" "<<c[j]<<"\n";
			if(c[i]!=c[j]){
				ans+=(min(zongchang+1-start[i],start[j]+a[j]-1)-max(zongchang+1-start[i]-a[i]+1,start[j])+1);
				//cout <<ans<<"\n";
			}
		}
	}
	cout <<ans;
	return 0;
} 
