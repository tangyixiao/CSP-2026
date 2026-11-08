#include <bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
long long n,m,ma=INT_MIN;
long long a[N],sum[N];
int he(int n){
	int su=a[n];
	for(int i=n;i<=n-m+1;i++){
		su=su&a[i];
	}
	return su;
}
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int r=1;r<=n-m+1;r++){
		sum[r]=he(r);
	}
	for(int i=1;i<=n;i++){
		ma=max(ma,sum[i]);
	}
	cout<<ma;
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
