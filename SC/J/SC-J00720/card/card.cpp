#include<bits/stdc++.h>
using namespace std;
int n , m , a[200010] , b[100010] , c[100010] , ci;
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			for(int z = 1; z <= ci; z++) if(c[z] == a[j]) ci = z - 1;
			c[++ci] = a[j];
		}
		for(int j = 1; j <= ci; j++) b[c[j]]++;
		ci = 0;
	}
	for(int i = 1; i <= m; i++) cout << b[i] << ' ';
	return 0;
}                           