#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N=2e5+10;
int n,m,a[N],maxn=-1,ans;
bool vis[N];
int getbit(int x){
	int cnt=0;
	while(x)cnt++,x>>=1;
	return cnt;
}
bool ck(int x,int bit){return (x>>bit)&1;}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	int len=getbit(maxn);
	bool cp[N];
	for(int i=1;i<=n;i++)vis[i]=1;
	for(int i=len-1;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++)cp[j]=vis[j];
		for(int j=1;j<=n;j++){
			if(vis[j]&&ck(a[j],i))cnt++;
			else vis[j]=0;
		}
		if(cnt>=m)ans+=(1<<i);
		else for(int j=1;j<=n;j++)vis[j]=cp[j];
	}
	cout<<ans;
	return 0;
}