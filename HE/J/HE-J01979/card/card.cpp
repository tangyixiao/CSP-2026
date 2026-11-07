#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int sum[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n==m){
		for(int i=1;i<=n;++i){
			cin>>a[i];
			sum[a[i]]=i;
		}
		for(int i=1;i<=m;++i) cout<<sum[i]<<" ";
		return 0;
	}
	return 0;
} 
