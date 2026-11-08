#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[300005],m[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("cared.out","w",stdout);
	cin >> n >> k;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	} 
	for (int i = 1;i <= n;i++){
		m[a[i]] = i;
	}
	for (int j = 1;j <= k;j++){
		cout << m[j] << " ";
	}
	return 0;
}
