#include<bits/stdc++.h>
#define int long long
using namespace std;
void io(){ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);}
void fp(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
}
const int N = 3e5 + 2;
const int INF = 1073741824;
int n,m;
int a[N];
int mx = 0,ans=0;
int vis[3000];
void dfs(int k,int o){//选到第几个 选了几个 
	if(k>n) 
		return ;
	if(o==m){
		int sum;
		for(int i=1;i<=n;i++){
			if(vis[i]){
				sum=a[i];break;
			}
		}
		for(int i=1;i<=n;i++){
			if(vis[i]) {
				sum=sum&a[i];
			}
		}
		ans = max(ans,sum);
		return ;
	}	
	vis[k+1]=1;
	dfs(k+1,o+1);
	vis[k+1]=0;
	dfs(k+1,o);
}
main(){
	io();fp();
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		mx = max(mx,a[i]);
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&(a[i]);
		}cout << ans <<"\n";
		return 0;
	}
	if(m==1){
		ans = mx;
		cout << ans <<"\n";
		return 0;
	}
	if(m==2){
		ans = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout << ans <<"\n";
		return 0;
	}
	if(n<=20){
		dfs(0,0);
		cout << ans <<"\n";
	}
}
