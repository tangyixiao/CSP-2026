#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005];
bool bj[200005][35],vis[200005];
int sum[35];
int ans;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i=-~i){
		cin>>a[i];
		for(int j=0;j<=30;j=-~j){
			if(a[i]&(1<<j))bj[i][j]=true,sum[j]++;
		}
	}
	for(int j=30;j>=0;j=~-j){
		if(sum[j]>=m){
			int cnt=0;
			for(int i=1;i<=n;i=-~i){
				if(vis[i])continue;
				if(bj[i][j])cnt++;
			}
			if(cnt>=m){
				for(int i=1;i<=n;i=-~i){
					if(vis[i])continue;
					if(!bj[i][j])vis[i]=1;
				}
				ans+=(1<<j);
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
感觉是一个贪心
我们应该优先保证最高位最大才行
接着一位一位向下递推
时复空复应该都是30*n 
*/
/*
rp++
*/
