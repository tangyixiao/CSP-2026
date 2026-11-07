#include <bits/stdc++.h>
using namespace std;
int a[100005];
char b[100005];
int n, sum;
bool flag=0;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		if(b[i]==b[i-1]){
			flag=1;
		}
	}
	if(flag==1){
		cout<<'0';
	}else{
		cout << "2";
	}
	
	return 0;
}

