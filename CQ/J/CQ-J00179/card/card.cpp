#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
int n,m,a[N],c[N],ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) c[a[j]]=0;
		for(int j=i;j<=n;j++){
			if(c[a[j]]==1){
				for(int k=j-1;k>=i;k--){
					c[a[k]]=0;
					if(a[k]==a[j]){
						break;
					}
				}
				c[a[j]]=1;
			}else c[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(c[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
/*
4 3
1 2 1 3
*/
