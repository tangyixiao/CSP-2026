#include <bits/stdc++.h>
#define lonit long long
using namespace std;
const lonit MAXN=5e5+5;
int n,m;
int a[MAXN];
stack<lonit> st;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n-1;i>=0;i--){
		cout<<n-i<<' ';
	}
	return 0;
}