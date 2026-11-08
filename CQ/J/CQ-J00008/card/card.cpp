#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int sfy[500005];
bool lx[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]==a[j]){
				sfy[i]=j;
			}
		}
	}
	for(int i=1;i<=n;i++){
		memset(lx,0,sizeof(lx));
		for(int j=i;j<=n;j++){
			if(sfy[j]>=i&&!lx[sfy[j]]){
				for(int x=sfy[j];x<j;x++){
					lx[x]=1;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(!lx[j]){
				ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

