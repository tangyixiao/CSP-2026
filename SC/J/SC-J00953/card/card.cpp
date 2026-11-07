#include<bits/stdc++.h>
using namespace std;
int a[500005];
int cnt[300005];
int main(){
	freopen("card.in","i",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool vis1[300005]={0};
		bool vis[500005]={0};
		for(int j=i;j<=n;j++){
			if(vis1[a[j]]!=0){
				for(int k=j;a[j]!=a[k];k--){
					vis[k]=1;
				}
			}
			else vis1[a[j]]++;
		}
		for(int j=i;j<=n;j++){
			if(vis[j]==0) cnt[a[j]]++;
			
		}
		cout<<endl<<endl;
		for(int i=1;i<=m;i++){
			cout<<cnt[a[i]]<<" ";
		}
		cout<<endl<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[a[i]]<<" ";
	}
	return 0;
} 