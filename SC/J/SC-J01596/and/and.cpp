#include<bits/stdc++.h>
using namespace std;
unsigned long long n, m;
unsigned long long a[200003];
unsigned long long d[200003];
int main(){
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = 1;i <= m;i++){
		for (int j = n;j > 0;j--){
			if (i == 1){
				d[j] = a[j];
			}else if (j < i){
				d[j] = d[j - 1] & a[j];
			}else{
				d[j] = max(d[j - 1] & a[j], d[j - 1]);
			}
		}
	}
	cout << d[n];
	return 0;
}