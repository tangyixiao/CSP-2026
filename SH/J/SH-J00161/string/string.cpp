#include <bits/stdc++.h>
using namespace std;
struct T{
	int num;
	char ch;
} a, b;
deque < T > q;
long long x, n, k, sum;
char y;
int main(){
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--){
		cin >> x >> y;
		q.push_back(T{x, y});
	}
	while (q.size() > 1){
		a = q.front(), b = q.back();
		k = min(a.num, b.num);
		a.num -= k, b.num -= k;
		if (a.ch != b.ch) sum += k;
		q.pop_front(), q.pop_back();
		if (a.num) q.push_front(a);
		if (b.num) q.push_back(b);
	}
	cout << sum;
	return 0;
} 
