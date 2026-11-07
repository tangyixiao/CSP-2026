#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,xx=1;
	cin >> n >> m;
	int a[200005];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	a[0]=a[1];
	for (int i=1;i<=n;i++){
		if(a[i]!=a[i-1]){
			cout << i-1 << endl;
		}
	}
	cout << n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
