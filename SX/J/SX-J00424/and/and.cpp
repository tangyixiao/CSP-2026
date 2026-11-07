#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,ans;
struct nde{
	int x,y;
}a[200005];
bool cmd(nde a,nde b){
	if(a.y==b.y){
		return a.x>b.x;
	}
	return a.y>b.y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i].x;
		a[i].y = __builtin_popcount(a[i].x);
	}
	sort(a+1,a+n+1,cmd);
	ans = a[1].x;
	for(int i = 2;i<=m;i++){
		ans = (ans&a[i].x);
	}
	cout<<ans<<endl;
	return 0;
}
