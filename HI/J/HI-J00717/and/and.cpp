#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10000005;
int a[MAXN]
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	cout << a[3];
	return 0;
}
