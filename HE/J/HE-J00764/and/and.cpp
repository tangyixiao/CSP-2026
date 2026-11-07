#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,maxx,a[200005],ans,mi,mj;
bool f[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1){
		ans=maxx;
	}
	else if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<=n;j++){
				if(i==j)
				continue;
				ll num=a[i]&a[j];
			    ans=max(ans,num);
			}
		}
	}
	else if(m==n||m==n-1){
			for(ll i=1;i<=n;i++){
			for(ll j=1;j<=n;j++){
				if(i==j)
				continue;
				ll num=a[i]&a[j];
			    if(ans<=num){
			    	mi=i;mj=j;
			    	ans=num;
				}
			}
		}
		f[mi]=1;
		f[mj]=1;
		for(ll k=1;k<=m-2;k++){
			ans=ans&a[1];
		for(ll i=2;i<=n;i++){
			if(f[i])
			continue;
			ll numm=ans&a[i];
			if(ans<=numm){
				ll mi=i;
				ans=numm;
			}
		}
		f[mi]=1;
		}
	
	}
	else{
		cout<<a[n-m+1];
	}
	
	cout<<ans;
	return 0;
}
