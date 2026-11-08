#include<bits/stdc++.h>
using namespace std;
//#define int long long
int a[220000],vis[220000];
int b[220000][35];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int k=a[i],t=0;
		while(k!=0){
			if(k%2==1)b[i][t]++;
			k/=2,t++;
		}
		vis[i]=1;
	}
	int ans=0;
	for(int i=32;i>=0;i--){
		int now=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==1&&vis[j]==1){
				now++;
			}
		}
		if(now>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++){
				if(b[j][i]==0||vis[j]==0){
					vis[j]=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
/*
i CAN DO IT.
*/
