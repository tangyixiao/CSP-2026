#include<bits/stdc++.h>
using namespace std;
int n,m,a[214514],bt[40][214514],vis[214514],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			bt[j][i]=(a[i]>>j)%2;
		}
	}
	int f=0;
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(!f||vis[j]){
				if(bt[i][j]) cnt++;
			}
		}
		if(cnt>=m){
			ans+=(1<<i);
			int ff;
			for(int j=1;j<=n;j++){
				if(!f||vis[j]){
					if(bt[i][j]) vis[j]=1,ff=1;
					else vis[j]=0;
				}
			}
			if(ff) f=ff;
		}
	}
	cout<<ans;
	return 0;
}
