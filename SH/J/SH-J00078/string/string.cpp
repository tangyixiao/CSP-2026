#include <bits/stdc++.h>

using namespace std;

#define N 200005

int n;
unsigned long long len[N];
unsigned long long secb[N];
char c[N];

void debugsec(int b) {
	cout << "[" << secb[b] << "," << secb[b] + len[b] - 1 << "]" << endl;
}

unsigned long long sece(int b) {
	return secb[b] + len[b] - 1;
}

unsigned long long seclen(unsigned long long b, unsigned long long off) {
	return len[b] - (off - secb[b]);
}

unsigned long long seclenend(unsigned long long b, unsigned long long off) {
	return off - secb[b] + 1;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	
	int secid = 0;
	for (int i = 0; i < n; ++i) {
		cin >> len[secid] >> c[secid];
		
		if (secid > 0 && c[secid] == c[secid - 1]) {
			len[secid - 1] += len[secid];
		}
		else {
			secid++;
		}
	}
	
	if (secid == 1) {
		cout << 0 << endl;
		return 0;
	}
	
	unsigned long long totlen = 0;
	for (int i = 0; i < secid; ++i) {
		secb[i] = totlen;
		totlen += len[i];
	}
	
	unsigned long long beg = 0;
	unsigned long long end = totlen - 1;
	unsigned long long begsec = 0;
	unsigned long long endsec = secid - 1;
	
	unsigned long long ans = 0;
	while (true) {
		auto beglen = seclen(begsec, beg);
		auto endlen = seclenend(endsec, end);
		auto mm = min(beglen, endlen);
		
		if (c[begsec] != c[endsec]) {
			ans += mm;
		}
		
		if (beglen > endlen) {
			beg += mm;
			end -= mm;
			endsec--;
		}
		else if (beglen < endlen) {
			beg += mm;
			end -= mm;
			begsec++;
		}
		else {
			beg += mm;
			end -= mm;
			begsec++;
			endsec--;
		}
		
		if (begsec >= endsec) {
			break;
		}
	}
	
	while (beg < end) {
		if (begsec == endsec) {
			break;
		}
		
		if (c[begsec] != c[endsec]) {
			++ans;
		}
		
		++beg;
		--end;
		
		if (beg > sece(begsec)) begsec++;
		if (end < secb[endsec]) endsec--;
	}
	
	cout << ans << endl;
}
