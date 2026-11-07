#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],p[500010],w,da[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		p[0]=a[i];
		w=1;
		for(int j=1;j<=m;j++){
			if(i==j){
				continue;
			}
			p[w]=a[j];
			w++;
			for(int o=w-2;o>=0;o--){
				if(p[o]==a[j]){
					w=o;
					break;
				}
			}
		}
		for(int j=0;j<=w;j++){
			if(p[j]==i){
				da[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",da[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

