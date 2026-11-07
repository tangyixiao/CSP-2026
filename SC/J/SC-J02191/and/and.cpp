#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n, m, ans;
int a[N];
stack<int> maxn;
bool cmp(int x, int y){
	if(x>y) return true;
	return false;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	if(m==n){
		ans=a[1];
		for(int i=2; i<=n; i++){
			ans&=a[i];
		}
		printf("%d", ans);
		return 0;
	}
	sort(a+1, a+n+1, cmp);
	for(int i=1; i<=m; i++){
		maxn.push(a[i]);
	}
	ans=maxn.top();
	for(int i=2; i<=m; i++){
		maxn.pop();
		ans&=maxn.top();
	}
	printf("%d", ans);
	return 0;
}