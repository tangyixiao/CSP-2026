#include<bits/stdc++.h>
using namespace std;
int a[500010],b[300010];
int victim[300010],write[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(write[a[j]]==0){
				write[a[j]]=j;
			}else{
				int x=j;
				while(true){
					x--;
					if(a[x]!=a[j]){
						write[a[x]]=0;
					}else{
						break;
					}
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(write[j]){
				b[j]++;
				write[j]=0;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",b[i]);
	}
	return 0;
}