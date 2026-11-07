#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n;
ll m,ans;
ll a[N];
ll c1(ll S){
	ll cnt=0;
	while(S){
		S=S&(S-1);
		cnt+=1;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll ALL=(1<<n)-1;
	for(ll S=0;S<=ALL;S++){
		ll cnt=c1(S);
		if(cnt!=m){
			continue;
		}
		ll cnt1=ALL;
		for(int i=0;i<=n;i++){
			if((1<<i)&S){
				cnt1&=a[i];
			}
		}
		ans=max(ans,cnt1);
	}
	cout<<ans;
	return 0;
}