#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int n,m;
ll a[N];
int num[35];
bool vis[N];
signed main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(false);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int> now;
	now.clear();
	for(int i=1;i<=n;i++){
		cin>>a[i];
		now.push_back(i);
		for(int k=0;k<32;k++) if((a[i]>>k)&1) num[k]++;
	} 
	ll ans=0;
//	for(int i=0;i<32;i++) cout<<num[i]<<' ';
//	cout<<'\n';
	for(int i=32;i>=0;i--){
		if(num[i]>=m){
			ans+=(1ll<<i);
			memset(num,0,sizeof num);
			vector<int> nw;
			nw.clear();
			for(auto j:now){
				if((a[j]>>i)&1){
					nw.push_back(j);
					for(int k=0;k<32;k++) if((a[j]>>k)&1) num[k]++;
				}
			}
			now=nw;
		} 
	}
	cout<<ans;
	return 0;
}
