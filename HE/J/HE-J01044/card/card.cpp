#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[5005],ans[3005],p[5005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-1;i++){
		int z=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=z;k++){
				if(p[k]==a[j]){
					z=k;
					break;
				}
			}
			z++;
			p[z]=a[j];
		}
		for(int j=1;j<=z;j++) ans[p[j]]++;
	}
	ans[a[n]]++;
	ans[1]--;
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

