#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
struct node{
	int m;
	char s;
}a[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long cnt = 0;
	for(int i = 1;i <= n;i++) {
		cin >> a[i].m >> a[i].s;
	}
	int l = 1,r = n;
	while(l < r) {
		if(a[l].s == a[r].s) {
			if(a[l].m > a[r].m) {
				a[l].m -= a[r].m;
				r--;
			}
			else if(a[l].m < a[r].m) {
				a[r].m -= a[l].m;
				l++;
			}
			else if(a[l].m == a[r].m){
				l++,r--;
			}
		}
		else {
			if(a[l].m > a[r].m) {
				a[l].m -= a[r].m;
				cnt += a[r].m;
				r--;
			}
			else if(a[l].m < a[r].m) {
				a[r].m -= a[l].m;
				cnt += a[l].m;
				l++;
			}
			else if(a[l].m == a[r].m){	
				cnt += a[l].m;
				l++,r--;
			}
		}
	}
	cout << cnt;
	return 0;
}
