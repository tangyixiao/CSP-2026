#include<bits/stdc++.h>
using namespace std;
struct node{
	int num, x;
}b[200005];
int a[200005];
int bin(int x){
	int cnt=0;
	while(x){
		int t = x%2;
		if(t==1) cnt++;
		x/=2;
	}
	return cnt;
}
bool cmp(node a, node b){
	if(a.num == b.num) return a.x > b.x;
	return a.num > b.num;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1; i <= n; i++){
		cin >> a[i];
		b[i].num = bin(a[i]);
		b[i].x = a[i];
	}
	sort(b+1, b+n+1, cmp);
	int ans=b[1].x;
	for(int i=2; i <= m; i++){
		ans = ans&b[i].x;
	}
	cout << ans;
	return 0;
}
