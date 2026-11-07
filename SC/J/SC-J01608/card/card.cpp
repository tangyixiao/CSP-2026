#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],ans[M];
vector<int> v(1,0);
void solve(vector<int> tmp,int len) {
	vector<int> pos(m+1,0); 
	while(len>=0) {
		int now=tmp[len];
		if(pos[now]==0) pos[now]=len--;
		else {
			int temp=pos[now];
			if(tmp[temp]!=-1) while(temp>len) tmp[temp--]=-1;
			pos[now]=len--;
		}
	}
	for(int x:tmp) if(x!=-1) ans[x]++;
	return ;
}
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=n; i>=1; i--) {
		v.push_back(a[i]);
		solve(v,n-i+1);
	}
	for(int i=1; i<=m; i++) cout<<ans[i]<<" ";
 	return 0;
}