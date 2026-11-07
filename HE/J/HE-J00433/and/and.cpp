#include <iostream>
#include <vector>
#include <algorithm>
#define MAXN 5000009
using namespace std;
int n,m;
vector<long long> v;
long long ans,a,cnt;
bool vis[MAXN];
void dfs(int x){
	long long rtn
	if(x==m){
		ans=max(ans,cnt);
		return;
	}
	for(int i=0;i<v.size();i++){
		rtn=cnt;
		if(!vis[v[i]]){
			vis[v[i]]=true;
			if(x==0) rtn=cnt=v[i];
			cnt=cnt&v[i];
			dfs(x+1);
			cnt=rtn;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	long long bn=v[0];
	if(m==n){
		for(int i=1;i<v.size();i++){
			bn=bn&v[i];
		}
		cout << bn;
		return 0;
	}
	dfs(0);
	cout << ans;
	return 0;
}
