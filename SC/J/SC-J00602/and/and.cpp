#include<bits/stdc++.h>
#define sjh0626s return
#define code 0
#define PII pair<int,int>
#define ll long long
#define int ll
#define all(g) g.begin(),g.end()
using namespace std;
int T=1,n,m;
const int N=2e5+10;
int a[N];
bitset<N>g[40];
bitset<N>bs;
int ans=0;
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];bs[i]=1;
		for(int j=29;j>=0;j--){
			if(a[i]&(1LL<<j))g[j][i]=1;
		}
	}
	for(int j=29;j>=0;j--){
		g[j]&=bs;
		if(g[j].count()<m)continue;
		bs=g[j];ans+=(1LL<<j);
	}
	cout<<ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//cin>>T;
	while(T--)solve();
	sjh0626s code;
}