#include<bits/stdc++.h>
using namespace std;

struct And{
	int v;
	string s;
	int gs1;
}a[200001];

int n, m, k;

string f(int n) {
	string s, s1;
	while(n != 0) {
		s1 += n%2+'0';
		n /= 2;
	}
	int l = s1.size();
	for(int i = l-1; i >= 0; i--) {
		s += s1[i];
	}
	return s;
}


int f2(string s) {
	int sum = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 1) sum++;
	}
	return sum;
}

bool cmp(And x, And y) {
	if(x.gs1 != y.gs1) return x.gs1 > y.gs1;
	else return x.s > y.s;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i].v);
		a[i].s = f(a[i].v);
		a[i].gs1 = f2(a[i].s);
	}
	sort(a+1, a+n+1, cmp);
	k = a[1].v;
	for(int i = 2; i <= m; i++) {
		k = k&a[i].v;
	}
	printf("%d", k);
	return 0;
}