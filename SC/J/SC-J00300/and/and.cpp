#include<bits/stdc++.h>
using namespace std;

using ll=long long;
const int N=2e5+5;
int n,m;
int cnt[35];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		ll tmp;
		cin>>tmp;
		for(int j=30;j>=0;j--)
			if((tmp>>j) & 1) cnt[j]++;
	}
	
	ll ans=0;
	for(int i=30;i>=0;i--){
		if(cnt[i]<m) continue;
		ans+=1<<i;
	}
	cout<<ans<<'\n';
	return 0;
}