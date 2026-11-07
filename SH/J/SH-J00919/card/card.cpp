#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[300010],t[500010],flag,c[500010],vis[500010],pos[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)  cin>>a[i];
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			flag=1;
			break;
		}
	}
	if(!flag){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1])  cout<<i<<" ";
		}
	}
	else if(m==2){
		if(a[n]==1){
			for(int i=1;i<=n;i++){
				if(a[i]==1)  ans[1]++,ans[2]++;
				else  ans[2]++;
			}
		}
		else{
			for(int i=1;i<=n;i++){
				if(a[i]==2)  ans[1]++,ans[2]++;
				else  ans[1]++;
			}
		}
		cout<<ans[1]<<" "<<ans[2]<<'\n';
	}
	else{
		for(int i=1;i<=n;i++){
			memset(vis,0,sizeof vis),memset(pos,0,sizeof pos);
			for(int j=i;j<=n;j++)  c[j]=a[j];
			for(int j=i;j<=n;j++){
				if(!vis[c[j]])  vis[c[j]]=j;
				else{
					for(int k=vis[c[j]];k<j;k++)  pos[k]=1;
					for(int k=1;k<=m;k++){
						if(vis[c[j]]<=vis[k]&&vis[k]<=j)  vis[k]=0;
					}
					vis[c[j]]=j;
				}
			}
//			for(int j=i;j<=n;j++)  cout<<pos[j]<<" ";
//			cout<<'\n'<<'\n';
			for(int j=i;j<=n;j++){
				if(!pos[j])  ans[c[j]]++;
			}
//			for(int j=i;j<=n;j++)  if(!pos[j])  cout<<c[j]<<" ";
//			cout<<'\n';
		}
		for(int i=1;i<=m;i++)  cout<<ans[i]<<" ";
	}
	return 0;
}
