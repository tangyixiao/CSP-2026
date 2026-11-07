#include<bits/stdc++.h>
using namespace std;
int f[200020],ans[100010];
int n,m;
int cnt[100010];
int main(){
	freopen("card.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>f[i];
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof(cnt));
		for(int j=i;j<=n;j++){
			if(cnt[f[j]]==1)memset(cnt,0,sizeof(cnt));
			cnt[f[j]]++;
		}
		for(int i=1;i<=m;i++)if(cnt[i]==1)ans[i]++;
	}
	freopen("card.out","w",stdout);
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
}
