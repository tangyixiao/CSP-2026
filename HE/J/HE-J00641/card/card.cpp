#include <bits/stdc++.h>
using namespace std;
int a[3005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int x;
	for (int i=1;i<=n;i++){
		cin >> x;
		a[x]++;
	}
	for (int i=1;i<=m;i++) cout << a[i] << " ";
	return 0;
}
