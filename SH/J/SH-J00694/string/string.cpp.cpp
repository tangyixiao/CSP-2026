#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int a[200000];
	char b[200000];
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
	}
	sort(a + 1, a + n  + 1);
	int m = 0;
	for(int i = 1; i <= n; i++){
		m += a[i];
	}
	cout << m - a[n];
	fclose(stdin);
	fclose(stdout); 
}
