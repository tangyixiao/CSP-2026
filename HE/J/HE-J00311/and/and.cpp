#include<bits/stdc++.h>
using namespace std;
int n,m;
long long maxx,a[200005];
vector<long long> vt;
void dfs(int x,int p){//当前考虑到第x个数，已选p个
	if(x>n||p==m){
		if(p==m){
			long long temp=vt[0];
			for(auto i:vt) temp&=i;
			maxx=max(maxx,temp);
		}
		return ;
	}
	vt.push_back(a[x]);
	dfs(x+1,p+1);
	vt.pop_back();
	dfs(x+1,p);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1,0);
	cout<<maxx;
	return 0;
} 
