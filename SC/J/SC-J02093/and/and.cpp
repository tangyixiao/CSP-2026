#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n,m;
int a[N],dp[N];
priority_queue<int> q;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i],q.push(a[i]);
	long long ans = q.top();q.pop();m--;
	while(m--){
		ans &= q.top();
		q.pop();
	}
	cout << ans;
	return 0;
}