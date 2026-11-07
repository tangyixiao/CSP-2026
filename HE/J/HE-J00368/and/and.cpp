#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=2e5+10; 
ll n,m,a[N],ans,cnt;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}else if(m==n){
		cnt=a[1];
		for(ll i=2;i<=n;i++){
			cnt&=a[i];
		}
		cout<<cnt;
	}else{
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				if(cnt < (a[i] & a[j])){
					cnt=a[i] & a[j];
				}
			}
		}
		cout<<cnt;
	}
	return 0;
}

