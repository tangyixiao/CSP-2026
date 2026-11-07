#include<bits/stdc++.h>
using namespace std;
long long s[200005];
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s,s+n+1);
	long long ans=s[n];
	for(int i=n-1,t=1;t<=m;t++){
		ans&=s[i];
	}
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	solve();
	return 0;
} 
