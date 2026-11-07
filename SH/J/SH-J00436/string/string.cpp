#include <iostream>
#include <string>
#include <string.h>
struct sub {
	long long len;
	long long tickst, tickend;
	char a;
};
sub subs[1000001];
long long n, len;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	std::cin >> n;
	std::string t;
	for (long long i = 1; i <= n; i++) {
		std::cin >> subs[i].len >> subs[i].a;
		subs[i].tickst = len + 1;
		len += subs[i].len;
		subs[i].tickend = len;
		for (int j = 1; j <= subs[i].len; j++) {
			t += subs[i].a;
		}
	}
	long long l = 1, r = len;
	long long subl = 1, subr = n;
	long long ans = 0;
	while (subl < subr && l < r) {
		long long accurate_tick_l = subs[subl].tickend - l + 1;
		long long accurate_tick_r = r - subs[subr].tickst + 1;
		char a = subs[subl].a;
		char b = subs[subr].a;
		if (accurate_tick_l <= accurate_tick_r) {
			if (a != b) ans += accurate_tick_l; 
			l += accurate_tick_l;
			r -= accurate_tick_l;
		}
		else {
			if (a != b) ans += accurate_tick_r;
			l += accurate_tick_r;
			r -= accurate_tick_r;
		}
		if (l > subs[subl].tickend) subl++; 
		if (r < subs[subr].tickst) subr--;
	}
	std::cout << ans << "\n";
	return 0;
} 
