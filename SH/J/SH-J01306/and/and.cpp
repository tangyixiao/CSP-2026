#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+5;
int n,m,a[maxn];
bool vis[maxn];
bool cmp(int x,int y){
	return x > y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	sort(a+1,a+n+1,cmp);
	int maxn = a[1],cnt = 1;
	while(--m){
		maxn &= a[cnt++];
	}
	cout << maxn;
	return 0;
} 
