#include <bits/stdc++.h>
using namespace std;
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("stding out","w",stdout);
	cin >> n;
	long long a[n];
	string c[n+1];
	for(int i = 0;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	string S;
	for(int i = 0;i <= n;i++){
		for(int j = 1;j <= a[i];j++){
			S + c[i];
		}
	}
	cout << "0";
	return 0;
}
