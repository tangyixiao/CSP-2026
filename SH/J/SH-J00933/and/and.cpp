#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,a[200010],bt[200010][32],vis[200010];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=31;j++){
			int x=(1<<j);
			if((a[i]&x)!=0){
				bt[i][j]=1;
			}
			else{
				bt[i][j]=0;
			}
		}
	}
	for(int j=31;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(bt[i][j]==1&&vis[i]==0){
				cnt++;
			}
		}
		if(cnt>=m){
			for(int i=1;i<=n;i++){
				if(bt[i][j]==0){
					vis[i]=1;
				}
			}
		}
	}
	ll ans=(1ll<<31)-1;
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			ans=(ans&a[i]);
		}
	}
	cout<<ans;
	return 0;
}
