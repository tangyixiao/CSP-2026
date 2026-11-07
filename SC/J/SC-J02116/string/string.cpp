#include <bits/stdc++.h>
using namespace std;

long long n, ci, len, l = 1, j, sum,i=1;
char c2;
struct A1 {
	int len2;
	char c;
} a[110000];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> ci >> c2;
		a[i].len2 = ci;
		a[i].c = c2;
		j = i;
	}
	while (l <= j) {
		if (a[l].c != a[j].c) {
			if (a[l].len2 <= a[j].len2) {
				sum += a[l].len2;
				a[j].len2 -= a[l].len2;
				l++;
			} else {
				sum += a[j].len2;
				a[l].len2 -= a[j].len2;
				j--;	
			}
		} else {
			if (a[l].len2 <= a[j].len2) {
				a[j].len2 -= a[l].len2;
				l++;	
			} else {	
				a[l].len2 -= a[j].len2;
				j--;	
			}
		}
	}	
	cout << sum;
	return 0;
}