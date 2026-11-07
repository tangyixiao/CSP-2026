#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n,a[1000010],cnt;
	string s,c[1000010],rec;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
	}
	for (int j = 1; j <= n; j++){
		for (int i = 1; i <= a[j]; i++){
			s += c[j];
		}
	}
	
	return 0;
}
