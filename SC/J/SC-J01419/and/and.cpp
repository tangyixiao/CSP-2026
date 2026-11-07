#include<bits/stdc++.h>
using namespace std;
int a[200005],f[20005][20005];
int n,m;
int ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	//cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){
			for(int k=m;k>=1;k--){
				if(k==1){
					f[i][k]=a[i];
				}
				else f[i][k]=max(f[j][k-1]&a[i],f[i][m]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,f[i][m]);
	}
	printf("%lld",ans);
	//cout<<ans;
	return 0;
} 