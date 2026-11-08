#include <bits/stdc++.h>
using namespace std;
int t[300010];
int a[300010];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	
	for(int j = 1;j <= n;j ++) {
	    int last = -1;
		for(int i = j;i <= n;i ++) {
			if(a[i] != last) {
			    last = a[i];
			    t[a[i]] ++;
		    }
		}
		
	}
	for(int i = 1;i <= m;i ++) {
		cout << t[i] << ' ';
	}
	return 0;
}
