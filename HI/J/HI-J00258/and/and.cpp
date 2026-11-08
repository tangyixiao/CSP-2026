#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200006];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	int sum = a[1];
	int ans = 0;
	if (m == 1){
		cout << a[n];
		return 0;
	}
	else if (m == n){
		ans = a[1];
		for (int z = 1;z <= n;z++){
			ans &= a[z];
		}
		cout << ans;
		return 0;
	}
	else if (m == 2){
		for (int z = 1;z <= n - 1;z++){
			sum = a[z];
			for (int j = z + 1;j <= n;j++){
				cout << a[z] << " " << a[j] << "\n";
				if (sum & a[j] > ans){
					ans = sum & a[j];
					cout << a[z] << " " << a[j] << "\n";
				}	
			}
		}
		cout << ans;
		return 0;
	}
	cout << a[n - m];
	return 0;
} 
