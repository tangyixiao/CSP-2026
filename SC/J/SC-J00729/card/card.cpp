#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int pos[300005];
int ans[300005];
int sum[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool A=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[a[i]]++;
		if(pos[a[i]]&&pos[a[i]]!=i-1) A=1;
		pos[a[i]]=i;
		
	}
	if(!A){
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]) sum[a[i]]+=sum[a[i-1]];
		}
		for(int i=1;i<=m;i++){
			cout<<sum[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int it=i;
		while(it<=n){
			ans[a[it]]++;
			it=pos[a[it]]+1;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}