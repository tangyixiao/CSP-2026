#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+3,B=33;
int n,m,a[N],vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=1;i<=n;i++)	vis[i]=1;
	for(int j=29;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i]>>j&1){
				if(vis[i])	cnt++;
			}
		}
		if(cnt<m)	continue;
		for(int i=1;i<=n;i++){
			if(a[i]>>j&1)	;
			else	vis[i]=0;
		}
	}
	int ans=(1<<30)-1;
	for(int i=1;i<=n;i++){
		if(vis[i])	ans&=a[i];
	}
	cout<<ans;
	return 0;
}