#include<bits/stdc++.h>
using namespace std;
int n,m,a[10005],b[10005],nxt[10005],ans[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		memset(nxt,0,sizeof(nxt));
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++){
			if(nxt[a[j]]!=0){
				for(int k=nxt[a[j]];k<j;k++){
					b[k]=0;
				}
			}
			nxt[a[j]]=j;
			b[j]=1;
		}
		for(int j=1;j<=m;j++){
			ans[j]+=b[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
    return 0;
}
