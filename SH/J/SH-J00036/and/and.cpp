#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans=2147483647,ans2;
int a[200001];
int b[200001][31];
bool f[200001];
void solve(int x,int y,int ppp){
	if(x>n){
		if(y==m) ans2=max(ans2,ppp);
		return ;
	}
	solve(x+1,y,ppp);
	if(y<m){
		ppp&=a[x];
		solve(x+1,y+1,ppp);
	}
	return ;
}
signed main(){
 	ios::sync_with_stdio(0);
 	cin.tie(0);
 	freopen("and.in","r",stdin);
 	freopen("and.out","w",stdout);
 	cin>>n>>m;
 	if(n<=20){
 		for(int i=1;i<=n;i++) cin>>a[i];
 		solve(1,0,ans);
 		cout<<ans2;
	}
	else{
		for(int i=1;i<=n;i++){
	 		cin>>a[i];
	 		int o=a[i];
	 		int t=0;
	 		while(a[i]>0){
	 			t++;
	 			b[i][t]=a[i]%2;
	 			a[i]/=2;
			}
			a[i]=o;
		}
		for(int i=30;i>=1;i--){
			int cnt=0;
			for(int j=1;j<=n;j++){
				if(b[j][i]==1&&f[j]==0) cnt++; 
			}
			if(cnt>=m){
				for(int j=1;j<=n;j++){
					if(!(b[j][i]==1&&f[j]==0)) f[j]=1; 
				}
			}
		}
		int cc=0;
		for(int i=1;i<=n;i++) if(f[i]==0&&cc<m) ans&=a[i],cc++;
		cout<<ans;
	}
 	return 0;
}
