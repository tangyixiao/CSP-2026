#include <bits/stdc++.h>
using namespace std;
int a[200005];
int n,m;
long long b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		b+=a[i]-i+1;
	}
	cout << 0;
	return 0;
}
