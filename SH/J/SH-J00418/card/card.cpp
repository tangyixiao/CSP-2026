#include<bits/stdc++.h>
using namespace std;
int n,m,x[500007],ans[300007];
bool flag[300007];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	if(n<=5 and n<=2){
		int now=n;
		for(int i=1;i<=n;i++){
			for(int j=n+i;j<=2*n;j++) x[j]=x[j-n];
			for(int j=n+i;j<=2*n;j++){
				for(int k=1;k<=now;k++){
					if(x[k]==x[j]){
						for(int o=k;o<=j-1;o++) flag[o]=false;
					}
				}
			}
			for(int j=1;j<=2*n;j++){
				if(flag[j]) ans[x[j]]++;
			}
			for(int i=n+1;i<=2*n;i++){
				x[i]=0;
			}
			for(int i=1;i<=2*n;i++) flag[i]=true;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
		return 0;
	}
}
