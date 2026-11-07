#include<bits/stdc++.h>
using namespace std;
long long a[3000005],cnt[300005],ans[300005];
bool vis[3000005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(vis[a[j]]==0){
				vis[a[j]]=1;
				cnt[a[j]]=j;	
			}else{
				for(int k=cnt[a[j]];k<j;k++){
					vis[a[k]]=0;	
				}
				vis[a[j]]=1;
			} 
		}
		for(int q=1;q<=m;q++){
			if(vis[q]==1){
				ans[q]++;
			}
		}
		memset(vis,0,sizeof(vis));
		memset(cnt,-1,sizeof(cnt));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
return 0;
}

