#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500100],las[500100],ans[500100];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){ 
		scanf("%lld",&a[i]);
	}
	for(int i=n;i>=1;i--){
		if(las[a[i]]==0){
			las[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			ans[a[j]]++;
			j=las[a[j]]+1;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}
