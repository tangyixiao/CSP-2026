#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
bool vis[MAXN];
int dp[MAXN];
vector<int> v;
int n,m;
int sm(){
	dp[0]=2147483647;
	for(int k=1;k<=m;k++){
		int us=-1;
		for(unsigned i=0;i<v.size();i++){
			if(vis[i]) continue;
			if((dp[k-1]&v[i])>dp[k]){
				dp[k]=(dp[k-1]&v[i]);
				us=i;
			}
		}
		if(us>=0)
			vis[us]=1;
	}
	return dp[m];
}
int trick(){
	int ans=v[0];
	for(unsigned i=1;i<v.size();i++)
		ans&=v[i];
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	v.resize(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	if(n==m) cout<<trick();
	else cout<<sm();
	cout<<'\n';
	return 0;
}