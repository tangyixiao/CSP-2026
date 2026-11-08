#include<bits/stdc++.h> 
using namespace std;
int n,m,a[500005],lst[300005],dp[300005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		lst[a[i]]=i;
		dp[a[i]]++;
	}
	for(int i=1;i<n;i++){
		if(lst[a[i]]==i){
			dp[a[i+1]]+=dp[a[i]];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<dp[i]<<" ";
	}
	return 0;
} 
