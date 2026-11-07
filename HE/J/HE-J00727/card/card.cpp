#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long ans;
int a[10000005];
int main(){
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	cout << n << " ";
	for(int i=2;i<=m;i++){
		cout << ans << " ";
	}	
	return 0;
}
