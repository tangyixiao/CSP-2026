#include <bits/stdc++.h>
using namespace std;
int head, tail, num, n;
long long ans, a;
char c[10];

struct info {
	long long a;
	char c;
	bool v;
	int prev, next;
} s[400001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	for (scanf("%d", &n); n--;) {
		scanf("%lld %s", &a, c);
		if (head)
			if (s[tail].c == c[0])
				s[tail].a += a;
			else {
				num++;
				tail++;
				s[tail].a = a;
				s[tail].c = c[0];
				s[tail].prev = tail - 1;
				s[tail - 1].next = tail;
			} else {
			num++;
			head = tail = 1;
			s[tail].a = a;
			s[tail].c = c[0];
		}
	}
	while (head != tail && !s[head].v && !s[tail].v) {
		info h = s[head], t = s[tail];
		if (h.a != t.a) {
			num++;
			if (h.a < t.a) {
				s[num].a = t.a - h.a;
				s[num].c = t.c;
				s[num].prev = t.prev;
				s[num].next = tail;
				s[tail].prev = num;
				s[tail].a = h.a;
			} else {
				s[num].a = h.a - t.a;
				s[num].c = h.c;
				s[num].prev = head;
				s[num].next = h.next;
				s[head].next = num;
				s[head].a = t.a;
			}
		}
		if (h.c != t.c)
			ans += s[head].a;
		s[head].v = 1;
		s[tail].v = 1;
		head = s[head].next;
		tail = s[tail].prev;
	}
	printf("%lld", ans);
}