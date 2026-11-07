#include<bits/stdc++.h>
using namespace std;
int n,m;
int card[500003];
main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m; 
	if(n==m){
		for(int i=0;i<n;i++){
			cout<<m<<" ";
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	int ans[m+1];
	for(int i=1;i<=n;i++){
		ans[card[i]]=i;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
} 
