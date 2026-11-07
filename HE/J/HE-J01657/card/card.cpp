#include<bits/stdc++.h>
using namespace std;
int a[500500],cnt[300300],use[500500];
bool vis[500500];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int h=n;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			h--;
			cnt[a[i]]++;
			for(int j=i-1;j>=1;j--){
				if(a[i]==a[j]&&!vis[j]){
					vis[j]=1;
				}
			}	
		}
		if(h==0){
			i=2;
			h=n-1;
			for(int i=1;i<=n;i++)vis[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
