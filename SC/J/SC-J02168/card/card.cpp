#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int ans[200005];
int a[200005],f[200005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	int bj=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]&&i!=1) bj=1;
	}
	if(bj==0){
		for(int i=1;i<=n;i++) f[a[i]]=i;
		for(int i=1;i<=m;i++){
			cout<<f[i]<<" "; 
		}
	}else{
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(f[a[j]]==1){
					for(int k=j-1; ;k--){
						if(a[k]!=a[j]){
							f[a[k]]--;
						}else{
							f[a[j]]--;
							break;
						}
					}
					f[a[j]]++;
				}else f[a[j]]=1;
			}
			for(int j=1;j<=m;j++){
				if(f[j]==1) ans[j]++;
			}
			memset(f,0,sizeof(f));
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
} 
/*

40%

4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1


*/