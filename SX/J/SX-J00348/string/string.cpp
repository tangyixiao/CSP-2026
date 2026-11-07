#include <bits/stdc++.h>
using namespace std;
//#define int long long
string s;
int n;
int thiss[200005];

struct node {
	int a;
	char b;
} hubb[200005];
int cnt = 0, ssize = 1;
int num = 1, sum = 0, gum = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	gum = 1;
	for (long i = 1; i <= n; i++) {
		cin >> hubb[i].a;
		cin >> hubb[i].b;
		thiss[i] = ssize;
		ssize += hubb[i].a;
//		for (long j = 1; j <= hubb.a; j++)
//			s += sss;
	}
	sum = 0;
//	cout << s;
	for (int i = ssize / 2; i >= 0; i--) {
		for (int j = n; j >= num; j--) {
			if (thiss[j] >= i)
				num = j;
		}
		if (sum > thiss[gum])
			gum++;
		if (hubb[num].b != hubb[gum].b && gum >= 0) {
			cnt++;
			cout << num << " " << gum << " " << sum << endl;
			cout << hubb[num].b << " " << hubb[gum].b << endl;
//			cout << i << endl;
//			cout << s[i] << " " << s[s.size() - i -1] << " " << s.size() << endl << endl;
		}
		sum++;
	}
	cout << cnt / 2;
	return 0;
}
