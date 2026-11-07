#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],k,yc[500010],ans[300010];
void clear(int x){
	for(int y=x;y<=n;++y){
		yc[y]=0;
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			for(int k=i;k<=j;++k){
				if(yc[k]==a[j]){
					clear(k);
					break;
				}
			}
			yc[j]=a[j];
		}
		for(int j=1;j<=n;++j){
			ans[yc[j]]++;
		}
		clear(1);
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
}
