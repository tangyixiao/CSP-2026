#include<bits/stdc++.h>
#define visca using
#define el namespace
#define barca std;
visca el barca
long long a[1145140],ans[1145140],b[1145140],c[1145140];
bool vis[1145140];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,cnt=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				vis[a[j]]=1;
				b[cnt]=a[j];
				c[a[j]]=cnt;
				cnt++;
			}
			else{
				for(int k=c[a[j]]+1;k<=cnt;k++){
					vis[b[k]]=0;
				}
				cnt=c[a[j]];
				b[cnt]=a[j];
				cnt++;
			}
		}
		for(int j=1;j<=m;j++){
			if(vis[j]==1){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}