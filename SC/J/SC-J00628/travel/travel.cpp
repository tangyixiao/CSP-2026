#include<bits/stdc++.h>
#define gc() getchar()
#define pc(ch) putchar(ch)
#define END return fflush(stdout), fclose(stdin), fclose(stdout), 0
typedef long long ll;
// #undef STDIO
// #undef DEBUG
#ifdef DEBUG
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
int c1, c2, s1, s2;
char t1, t2;
void print(bool x){
	if(x) pc('1');
	else pc('0');
}
int main(){
	#ifndef STDIO
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	#endif
	scanf("%d%d%c%d%d%c", &c1, &s1, &t1, &c2, &s2, &t2);
	print(c1 == c2);
	print(c1 == c2 && s1 == s2);
	print(c1 == c2 && s1 == s2 && !((t1 <= 'C') ^ (t2 <= 'C')));
	if(t1 > t2) std::swap(t1, t2);
	print(c1 == c2 && s1 == s2 && !((t1 <= 'C') ^ (t2 <= 'C')) && (t2 - t1 <= 1 || (t1 == 'D' && t2 == 'F')));
	END;
}