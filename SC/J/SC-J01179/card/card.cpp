#include<bits/stdc++.h>
using namespace std;
const int N = 5e5,M = 3e5;
#define ll long long
ll n,a[N],b[M],m;
vector<ll>v;
bool vis[M];
void dfs(ll x){
	if(x==n+1){
		memset(vis,0,sizeof(vis));
		for(int i=0;i<v.size();i++){
			if(!vis[v[i]]){
				b[v[i]]++;
				vis[v[i]] = 1;
			}
		}
		v.clear();
		return;
	}
	for(int i=0;i<v.size();i++){
		if(a[x]==v[i]){
			ll p = v.size()-1;
			while(p>=i){
				v.pop_back();
				p--;
			}
			break;
		}
	}
	v.push_back(a[x]);
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
	
	dfs(x+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(i);
	//	n--;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}