#include<bits/stdc++.h>
using namespace std;
int a[500010],c[300010],tab[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int now=1;
	for(int i=1;i<=n;i++){
		now=1;
		memset(c,0,sizeof(c));
		for(int j=i;j<=n;j++){
			if(c[a[j]]!=0){
				for(int k=c[a[j]]+1;k<now;k++){
					c[tab[k]]=0;
				}
				now=c[a[j]];
			}
			tab[now++]=a[j];
			c[a[j]]=now-1;
		}
		for(int i=1;i<now;i++){
			ans[tab[i]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
