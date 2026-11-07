#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+5;
int a[N];
int vis[N];
int ans=0;
int n,m;
vector<int> v;
void dfs(int s,int cnt){
	if(vis[s]==1)return;
	vis[s]=1;
	//cout<<1<<endl;
	if(v.size()==m){
		int d=a[v[0]];
		//cout<<2<<endl;
		for(auto c:v){
			d&=(a[c]);
			//cout<<a[c]<<" ";
		}
		//cout<<endl;
		ans=max(d,ans);
		return;
	}
	v.push_back(s+1);dfs(s+1,m);
	v.pop_back();dfs(s+1,m);
	//cout<<4<<endl;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	reverse(a+1,a+1+n);
	//cout<<(3&3)<<endl;
	dfs(1,m);
	//cout<<2<<endl;
	cout<<ans;
	return 0;
}
