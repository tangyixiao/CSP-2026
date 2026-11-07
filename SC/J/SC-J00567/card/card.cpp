#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int as[1000005],v;
int vis[1000005];
int ak[1000005],v2;
int ans=-1;
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]<a[i-1]){
			flag=0;
		}
	}
	if(flag==0){
		for(int i=1;i<=n;i++){
			v=0;
			for(int j=i;j<=n;j++){
				bool o=0;
				for(int k=v;k>=1;k--){
					if(a[j]==as[k]){
						v=k;
						as[v]=a[j];
						o=1;
						break;
					}
				}
				if(!o){
					as[++v]=a[j];
				}
			}
			for(int j=1;j<=v;j++){
				vis[as[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<vis[i]<<' ';
		}
	}else{
		a[n+1]=-1;
		int q=1;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				v2++;
				ak[v2]=ak[v2-1]+(i-q+1);
				vis[a[i]]=ak[v2];
				q=i+1;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<vis[i]<<' ';
		}
	}
	
	return 0;
}