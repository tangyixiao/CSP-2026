#include<bits/stdc++.h>
using namespace std;
const int MAXN=34;
int XP[MAXN];
multiset<int>G[MAXN];
int n,m,ans;
multiset<int>st;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1,a;i<=n&&cin>>a;i++){
		st.insert(a);
		for(int j=0;j<=30;j++)
			if(a&(1<<j)) G[j].insert(a);
	}
	XP[0]=1;
	for(int i=1;i<=31;i++) XP[i]=XP[i-1]*2;
	for(int i=30;i>=0;i--){
		if(int(G[i].size())<m) continue;
		multiset<int>ts;
		for(int v:st){
			if(!G[i].count(v)) continue;
			ts.insert(v);
		}
		st=ts;
		if(int(st.size())<m) break;
		ans+=XP[i];
	}
	cout<<ans;
	return 0;
}