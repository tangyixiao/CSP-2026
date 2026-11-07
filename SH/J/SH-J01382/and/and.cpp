#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m;
int a[2][N];
int cur=0;
int r[2]={0,0};
int ans=0;
bool bit(int x,int b){// 0 or 1
	return (x>>b)&1;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[0][++r[0]]=x;
	}
	for(int b=29;b>=0;b--){
		r[cur^1]=0;
		for(int i=1;i<=r[cur];i++){
			int x=a[cur][i];
			if(bit(x,b)) a[cur^1][++r[cur^1]]=x;
		}
		if(r[cur^1]<m) continue;
		ans^=(1<<b);
		cur^=1;
	}
	printf("%lld\n",ans);
	return 0;
}

