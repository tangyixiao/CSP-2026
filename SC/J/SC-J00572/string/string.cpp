#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	long long a[n];
	string c[n];
	for(int i = 0; i < n; i++){
		cin >> a[i] >> c[i]; 
	}
	string s;
	for(int i = 0; i < a[n]; i++){
		for(int j = 0; j < n; j++){
			s += c[j];
		}
	}
	string m;
	for(int i = a[n-1]; i >=0; i--){
		for(int j = n-1; j >= 0; j--){
			m += c[j];
		}
	}
    int cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] != m[i]){
			cnt++;
		}
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}