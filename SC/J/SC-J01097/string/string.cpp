#include<bits/stdc++.h>
using namespace std;


const long long N = 200005;
long long n, len, ans, lpos, rpos;
long long a[N];
char s[N];

struct L{
	int pre;
	int nxt;
	long long len;
	char str;
} l[N];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(long long i = 1; i <= n; i++){
		cin >> a[i] >> s[i];
		len += a[i];
		if(s[i] == s[i - 1]){
			a[i - 1] += a[i];
			n--; i--;
		}
	}
	for(long long i = 1; i <= n; i++){
		l[i].pre = i - 1, l[i].nxt = i + 1, l[i].len = a[i], l[i].str = s[i];
	}
	l[n].nxt = 0;
	if(len % 2 == 1){
		long long sum = 0, pos;
		for(long long i = 1; i <= n; i++){
			sum += a[i];
			if(sum > len / 2){
				pos = i;
				break;
			}
		}
		long long ltmp = len / 2 - (sum - a[pos]), rtmp = sum - len / 2 - 1;
		l[++n].len = ltmp, l[n].pre = l[pos].pre, l[n].str = s[pos];
		l[++n].len = rtmp, l[n].nxt = l[pos].nxt, l[n].str = s[pos];
		lpos = n - 1, rpos = n;
	}
	if(len % 2 == 0){
		long long sum = 0, pos;
		for(long long i = 1; i <= n; i++){
			sum += a[i];
			if(sum > len / 2){
				pos = i;
				break;
			}
		}
		long long ltmp = len / 2 - (sum - a[pos]), rtmp = sum - len / 2;
		l[++n].len = ltmp, l[n].pre = l[pos].pre, l[n].str = s[pos];
		l[++n].len = rtmp, l[n].nxt = l[pos].nxt, l[n].str = s[pos];
		lpos = n - 1, rpos = n;
	}
	while(lpos != 0){
		if(l[lpos].str != l[rpos].str){
			if(l[lpos].len == l[rpos].len){
				ans += l[lpos].len;
				lpos = l[lpos].pre, rpos = l[rpos].nxt;
			}
			else if(l[lpos].len > l[rpos].len){
				ans += l[rpos].len;
				l[lpos].len -= l[rpos].len;
				rpos = l[rpos].nxt;
			}
			else{
				ans += l[lpos].len;
				l[rpos].len -= l[lpos].len;
				lpos = l[lpos].pre;
			}
		}
		else{
			if(l[lpos].len == l[rpos].len){
				lpos = l[lpos].pre, rpos = l[rpos].nxt;
			}
			else if(l[lpos].len > l[rpos].len){
				l[lpos].len -= l[rpos].len;
				rpos = l[rpos].nxt;
			}
			else{
				l[rpos].len -= l[lpos].len;
				lpos = l[lpos].pre;
			}
		}
	}
	cout << ans;
	return 0;
}