#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int A=5e5+10;
const int B=3e5+10;
ll n,m,s,x;
ll a[A],ans[B];
ll vis[A][5];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<m;
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		x=i+1;s=1;
		while(x<=n&&a[x]==a[x-1]){
			s++;
			x++;
		}
		i=x-1;
		for(int j=i;j<=n;j++){
			if(vis[a[j]][1]==0){
				vis[a[j]][1]=1;
				vis[a[j]][2]=j;
			}else{
				for(int k=vis[a[j]][2]+1;k<j;k++){
					vis[a[k]][1]=0;
				}
				vis[a[j]][2]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(vis[j][1])ans[j]+=s;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

