#include <bits/stdc++.h>
using namespace std;
long long m,n;
int maxn[100005];
int a[1000005];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=m;i++){
		maxn[i]=a[n+1-i];
	}
	ans=maxn[1];
	for(int i=2;i<=m;i++){
		ans=ans|maxn[i];
	}
	cout << ans;
	return 0;
}
