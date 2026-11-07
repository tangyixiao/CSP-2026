#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[50005];
bool vis[30005];
int ans[30005];
int c[50005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) f=0;
	}
	if(f){
		for(int st=1;st<=n;st++){
			memset(c,0,sizeof c);
			memset(vis,0,sizeof vis);
			int r=0;
			for(int i=st;i<=n;i++){
				if(vis[a[i]]==0){
					c[++r]=a[i];
					vis[a[i]]=1;
				}
				else{
					c[r]=a[i];
					vis[a[i]]=1;
				}
			}
			for(int i=1;i<=r;i++){
				ans[c[i]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		exit(0);
	}
	for(int st=1;st<=n;st++){
		memset(c,0,sizeof c);
		memset(vis,0,sizeof vis);
		int r=0;
		for(int i=st;i<=n;i++){
			if(vis[a[i]]==0){
				c[++r]=a[i];
				vis[a[i]]=1;
			}
			else{
				bool op=0;
				int idx=0;
				for(int j=1;j<=r;j++){
					if(op==1){
						c[j]=0;
					}
					else if(c[j]==a[i]){
						c[j]=0;
						vis[a[j]]=0;
						op=1;
					}
					else idx++;
				}
				r=idx;
				c[++r]=a[i];
				vis[a[i]]=1;
			}
		}
		for(int i=1;i<=r;i++){
			ans[c[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 