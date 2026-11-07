#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 +10;
//80pts
int n, m;
struct node{
	int a, cnt;
};
bool operator<(node a, node b){
	if(a.cnt != b.cnt) return a.cnt < b.cnt;
	return a.a < b.a;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	priority_queue<node> q;
	for(int i = 1;i<=n;i++){
		int a;
		cin>>a;
		q.push({a, __builtin_popcount(a)});
	}
	long long ans = 0x7fffffffffffffff;
	for(int i = 1;i<=m;i++){
		int k = q.top().a;
		q.pop();
		if(k == 0) cout<<i<<'*';
//		cout<<k<<'\n';
		ans &= k;
//		if(ans == 0) ans = k;
	}
	cout<<ans;
	return 0;
}
