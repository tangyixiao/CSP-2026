#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],cnt=0,b[300005],vis[500005],f;
signed main(){
	ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int g=1;
	for(int i=0;i<n;i++)cin>>a[i];
	while(cnt<=n){
		for(int i=cnt;i<n;i++)vis[i]=1;
		for(int i=cnt;i<n;i++){
			f=1;
			for(int j=cnt;j<i;j++){
				if(a[j]==a[i]&&vis[j]){
					for(int k=j;k<i;k++)vis[k]=0;
					break;
				}
			}
		}
		for(int i=cnt;i<n;i++){
			if(vis[i])b[a[i]]++;
		}
		cnt++;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	return 0;
}
