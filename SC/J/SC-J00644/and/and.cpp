#include<bits/stdc++.h>
using namespace std;
const int MAX=(1<<30)-1;
const int N=2e5+10;
int n,m;
int a[N];
int c[N][35];
int vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int tmp=a[i];
		for(int j=0;j<=30;j++){
			c[i][j]=tmp%2;
			tmp/=2;
		}
	}
	int ans=0;
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(c[i][j]==1&&vis[i]==0)cnt++;
		}
		if(cnt>=m){
			for(int i=1;i<=n;i++){
				if(c[i][j]==0)vis[i]=1;
			}
			ans+=(1<<j);
		}
	}
	cout<<ans;
	return 0;
}