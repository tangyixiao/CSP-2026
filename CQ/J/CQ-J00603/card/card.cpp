/*card*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e6+5,M=3e6+5;
vector<int> v;
unordered_set<int> us;
unordered_map<int,bool> vis[N];
int n,m,a[N],t[M],sign=0;
void game(int x){
	us.clear();
	v.clear();v.shrink_to_fit();
	for(int i=x;i<=n;i++){
		if(us.count(a[i])){
			vis[x][i]=1;
			int k=find(v.begin(),v.end(),a[i])-v.begin();
			while(v.size()>k){
				vis[x][v.back()]=0;
				v.pop_back();
			}
			v.push_back(a[i]);
			vis[x][a[i]]=1;
		}else{
			v.push_back(a[i]);
			us.insert(a[i]);
			vis[x][a[i]]=1;
		}
	}
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) game(i);
	for(int i=1;i<=n;i++)
		for(auto kv:vis[i])
			if(kv.second) t[kv.first]++;
	for(int i=1;i<=m;i++) cout<<t[i]<<' ';
	cout<<'\n';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

*/
