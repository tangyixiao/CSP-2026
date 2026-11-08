#include <bits/stdc++.h>

using namespace std;

int n;
int a[200005];
char c[200005];
long long sum; 

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	int i = 1, j = n;
	for ( ; i < j; ){
		if (c[i] == c[j]){
			if (a[i] > a[j]){
				a[i] -= a[j];
				j-- ;
			}else if (a[i] == a[j]){
				i++ ;
				j-- ;
			}else{
				a[j] -= a[i];
				i++ ;
			}
		}else{
			if (a[i] > a[j]){
				sum += a[j];
				a[i] -= a[j];
				j-- ;
			}else if (a[i] == a[j]){
				sum += a[j];
				i++ ;
				j-- ;
			}else{
				sum += a[i];
				a[j] -= a[i];
				i++ ;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
