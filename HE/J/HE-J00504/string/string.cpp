#include <iostream>

using namespace std;
using ll = long long;

const int N = 2e5 + 5;

int n;

int top;
struct Node {
	ll siz;
	char word;
}a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1;i <= n;i++) {
		ll siz;
		char word;
		cin >> siz >> word;
		if (top && a[top].word == word) a[top].siz += siz;
		else {
			a[++top].siz = siz;
			a[top].word = word;
		}
	}
	
	ll ans = 0;
	int l = 1, r = top;
	while (l < r) {
		if (a[l].siz >= a[r].siz) {
		if (a[l].word != a[r].word)	ans += a[r].siz;
			a[l].siz -= a[r].siz;
			a[r].siz = 0;
			r--;
			if (a[l].siz == 0) l++; 
		}
		else {
			if (a[l].word != a[r].word) ans += a[l].siz;
			a[r].siz -= a[l].siz;
			a[l].siz = 0;
			l++;
			if(a[r].siz == 0) r--;
		}
	}
	cout << ans << '\n';
	return 0;
}
