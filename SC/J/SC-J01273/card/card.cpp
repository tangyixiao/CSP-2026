#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],vis[300010],b[300010],c[500010],cnt[300010];
void game(int x){
	for(int i=1;i<=n;i++){
		b[a[i]]=0;
		vis[a[i]]=0;
	}
	int k=0;
	for(int i=x;i<=n;i++){
		if(vis[a[i]]==0){
			c[++k]=a[i];
			vis[a[i]]=1;
			b[a[i]]=k; 
		}
		else{
			for(int j=b[a[i]];j<=k;j++){
				c[j]=0;
			}
			k=b[a[i]];
			c[k]=a[i];
			
		}
	}
	for(int i=1;i<=k;i++){
		cnt[c[i]]++; 
		c[i]=0;
	} 
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		game(i);
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}