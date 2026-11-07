#include<bits/stdc++.h>

using namespace std;


const int N = 2e5 + 10;
int n;
long long a;
char c;
string yb = "2";

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long cnt = 0;
	long long ans = 0;
	for (int i = 1; i <= n; i++){
		cin >> a >> c;
		for (long long j = 1; j <= a; j++){
			yb = yb + c;
		} 
		cnt = cnt + a;
	}
	long long cnt1 = cnt;
	cnt = cnt / 2;
	for (long long i = 1; i <= cnt; i++){
		if (yb[i] != yb[cnt1 - i + 1]){
			ans ++;
		}
	} 
	cout << ans;
	return 0;
}
