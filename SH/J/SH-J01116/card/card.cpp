#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500009],ans[300009],pos[500009],nxt[500009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			pos[j]=0;
			nxt[j]=j+1;
		}
		for(int j=i;j<=n;j++){
			ans[a[j]]++;
			if(!pos[a[j]]){
				pos[a[j]]=j;
			}
			else{
				int posa=pos[a[j]];
				for(int k=pos[a[j]];k<j;k=nxt[k]){
					ans[a[k]]--;
					pos[a[k]]=0;
				}
				nxt[posa-1]=j;
				pos[a[j]]=j;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
