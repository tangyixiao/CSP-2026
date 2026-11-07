#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	vector<int> a(n),last(m+1),ans(m+1);
	for(int i=0;i<n;i++){
		cin>>a[i];
		last[a[i]]=i;
	}
	for(int k=1;k<=n;k++){
		for(int i=k-1;i<n;){
			ans[a[i]]++;
			i=last[a[i]]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<(i==m?"":" ");
	}
	cout<<'\n';
	return 0;
}
