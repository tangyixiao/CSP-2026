#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
struct e{
	char c;
	long long s;
	int vis;
}a[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int f = 0;
	char c;
	string str; 
	for(int i = 1;i <= n;i ++) {
		scanf("%d %c", &a[i].s, &a[i].c);
		for(int k = 1;k <= a[i].s;k ++) {
			str += a[i].c;
		}
	}
    long long ans = 0;
    for(int i = 0, j = str.size() - 1;i <= j;i ++, j --) {
		if(str[i] != str[j]) {
		    ans ++;
	    }
   	}
	cout << ans;
    return 0;
}
