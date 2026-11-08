#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],vis[200005],w[200005][35],ans=0,c[35];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int j=a[i],cnt=0;
		while(cnt<=30){
			w[i][cnt++]=j%2;
			j/=2;
		}
	} 
	c[0]=1;
	for(int i=1;i<=30;i++){
		c[i]=c[i-1]*2;
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(!vis[j]&&w[j][i]==1){
				cnt++;
			}
			if(cnt>=m)break;
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				if(w[j][i]==0){
					vis[j]=1;
				}
			}
			ans+=c[i];
		}
	} 
	cout<<ans;
	return 0;
}

