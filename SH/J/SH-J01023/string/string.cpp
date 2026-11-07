#include<bits/stdc++.h>
using namespace std;
int n;
vector<long long> a(200010); 
vector<char> c(200010);
char fd(int k);
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long ans = 0, z = 0; 
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
		cin >> c[i];
		ans += a[i];
	}
	for(long long i = 0; i < (ans / 2 + 1); i ++) {
		if((fd(i)) != (fd(ans - i - 1))) {
			z ++;	
		}
	}
	cout << z;
	return 0;
} 

char fd(int k) {
	long long s = a[0];
	for(int i = 0; i < n; i ++) {
		if(s >= (k + 1)) return c[i];
		else {
			s += a[i + 1];
		} 	
	} 
}
