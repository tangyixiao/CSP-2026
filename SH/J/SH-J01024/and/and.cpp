#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,ans;
int a[N];
vector <int> aa;
void dfs(int x,int sum,int cnt){
	if (x==n)return ;
	if (cnt==m){
		int awa=aa[0];
		for (int i=1;i<aa.size();i++){
			awa&=aa[i];
		}
		ans=max(ans,awa);
		return ;
	}
	dfs(x+1,sum,cnt);
	aa.push_back(a[x]);
	dfs(x+1,sum&a[x],cnt+1);
	aa.pop_back();
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,a[0],0);
	cout<<ans;
	return 0;
}
