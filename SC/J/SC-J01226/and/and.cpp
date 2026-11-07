#include<bits/stdc++.h>
using namespace std;
const int N=6000005;
int to[N][2],tot,cnt[N];
int n,m;
inline void work(int x){
	int t[35];
	for(int i=1;i<=30;i++){
		t[i]=x&1;
		x>>=1;
	}
	int p=0;
	for(int i=30;i>=1;i--){
		if(!to[p][t[i]])
			to[p][t[i]]=++tot;
		p=to[p][t[i]];
		cnt[p]++;
	}
}
vector<int>now,nxt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1,x;i<=n;i++){
		cin>>x;
		work(x);
	}
	int ans=0,sum=cnt[to[0][1]],nxts=0;
	now.push_back(0);
	for(int i=30;i>=1;i--){
		if(sum>=m)
			ans|=(1<<(i-1));
		for(int cur:now){
			if(to[cur][1]){
				nxt.push_back(to[cur][1]);
				nxts+=cnt[to[to[cur][1]][1]];
			}
			if(sum<m&&to[cur][0]){
				nxt.push_back(to[cur][0]);
				nxts+=cnt[to[to[cur][0]][1]];
			}
		}
		sum=nxts;
		nxts=0;
		now=nxt;
		nxt.clear();
	}
	cout<<ans;
	return 0;
}