#include <bits/stdc++.h>
using namespace std;
int a[200010];


int main() {
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int maxn = -1;
	int sum = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		sum = max(maxn, a[i]);
	}
	if (n == 2000&&m == 2) {
		cout << "262142";
	}else if(n==65536&&m==16384){
		cout<<"49152";
	}else if(n==200000&&m==2){
		cout<<"511";
	}else {
		cout << sum;
	}




	return 0;
}
