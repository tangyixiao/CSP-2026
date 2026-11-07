#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[200005];
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	int sum = -1;
	for(int i = 1; i <= n; i ++){
		for(int j = i + 1; j <= i + m - 1; j ++){
			int x = a[i];
			x = x & a[j];
			if(x > sum) sum = x;
		} 
	}
	cout << sum;
	return 0;
}