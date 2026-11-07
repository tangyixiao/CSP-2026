#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
using ll=long long;
int n,m;
int a[N];
int vis[N];
int vis2[N];
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		int e=0;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				e++;
				vis[a[j]]=e;
				vis2[e]=a[j];
			}else {
				for(int k=vis[a[j]]+1;k<=e;k++)vis[vis2[k]]=0;
				e=vis[a[j]];
			}
		}
		for(int k=1;k<=e;k++){
			ans[vis2[k]]++;
		}
		memset(vis,0,sizeof vis);
		memset(vis2,0,sizeof vis2);
		//cout<<endl;
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
