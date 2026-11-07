#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[500005],b[500005];
int vis[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout)
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int p=1;
		bool yoyo[500005]={};
		memset(b,0,sizeof(b));
	    for(int j=i;j<=n;j++){
	    	if(!yoyo[a[i]]){
	    		b[p]=a[i];
	    		p++;
			}else{
				for(int u=j;u<=n;u++){
					if(b[u]==a[i]){
						for(int v=u+1;v<=n;v++){
							b[v]=0;
						}
						p=u+1;
						break;
					}
				}
			}
		}
	
	}
	for(int i=1;i<=m;i++){
		cout<<vis[i]<<" ";
	}
	return 0;
}
