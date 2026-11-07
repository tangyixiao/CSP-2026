#include<bits/stdc++.h>
using namespace std;
int a[500000+9],b[500000+9],c[300000+9];int n,m; 
void dfs(int x){
	memset(b,0,sizeof(b));
	for(int i=x;i<=n;i++){
		if(b[i]==a[i]){
			int k=i; 
			c[b[k]]++;
			for(int j=k;j<=n;j++){
				c[b[j]]--;
				b[j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			if(b[i]==0){
				b[i]=a[i];
				c[a[x]]++;
			}
		}
	}	
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	cin.tie(0)->sync_with_stdio(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(i);
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
