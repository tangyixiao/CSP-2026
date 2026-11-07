#include <bits/stdc++.h>
using namespace std;
int main() {return 0;
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	int n,m,p[500010],sl[500010];cin>>n>>m;for(int i=1;i<=n;i++){cin>>p[i];}
	for(int i=1;i<=n;i++){
		int w=0,zm[500010],h[500010];
		for(int j=i;j<=n;j++){
			if(h[p[j]]==0){
				zm[++w]=p[j];
				h[p[j]]=w;
			}
			else{
				for(int k=h[sl[j]]+1;k<=w;k++){
					h[zm[k]]=0;
				}
				w=h[p[j]];
			}
		}
		for(int j=1;j<=w;j++){
			sl[zm[j]]++;
		}
	}
	for(int i=1;i<=m;i++){cout<<sl[i]<<" ";}
	return 0;
}
