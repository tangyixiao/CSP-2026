#include<bits/stdc++.h>
using namespace std;
int n,m;
int ayyt[500005],mayyt[300005],ans[500005],zhuozi[500005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>ayyt[i];
	for(int i=1;i<=n;i++){
		fill(mayyt,mayyt+m+1,0);
		fill(zhuozi,zhuozi+n+1,0);
		int xvshu=i;
		int j=0;
		while(xvshu<=n){
			if(mayyt[ayyt[xvshu]]==1){
				while(zhuozi[j]!=ayyt[xvshu]){
					mayyt[zhuozi[j]]=0;
					zhuozi[j]=0;
					j--;
				}
				xvshu++;
				continue;
			}
			j++;
			mayyt[ayyt[xvshu]]=1;
			zhuozi[j]=ayyt[xvshu];
			xvshu++;
		}
		for(int k=1;k<=m;k++)if(mayyt[k]!=0)ans[k]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}