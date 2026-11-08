#include<bits/stdc++.h>
using namespace std;
namespace rm{
	const int maxsize = 1 << 20, maxsize2 = 1 << 18;
	char inbuf[maxsize], outbuf[maxsize2], *p1 = inbuf, *p2 = inbuf, *p3 = outbuf;
	#define gc() (p1 == p2 ? (p2 = (p1 = inbuf) + fread(inbuf, 1, maxsize, stdin), p1 == p2 ? EOF : *p1 ++) : *p1 ++)
	#define pc(ch) ((p3 == outbuf + maxsize2) && (fwrite(outbuf, 1, maxsize2, stdout), p3 = outbuf), *p3 ++ = ch)
	#define flush() (fwrite(outbuf, 1, p3 - outbuf, stdout), p3 = outbuf)
	int u_read(){
		char ch = gc(); int x = 0;
		while(ch < 48 || ch > 57) ch = gc();
		while(ch >= 48 && ch <= 57) x = (x << 3) + (x << 1) + (ch ^ 48), ch = gc();
		return x;
	}
	int read(){
		char ch = gc(); int x = 0; bool f = 0;
		while(ch < 48 || ch > 57) f |= ch == 45, ch = gc();
		while(ch >= 48 && ch <= 57) x = (x << 3) + (x << 1) + (ch ^ 48), ch = gc();
		return f ? -x : x; 
	} 
	void u_write(int x){
		int stk[10], tp = 0;
		while(x) stk[tp ++] = x % 10, x /= 10;
		if(!tp) pc(48);
		else while(tp --) pc(stk[tp] + 48);
	}
	void write(int x){
		if(x < 0) pc(45), x = -x;
		int stk[10], tp = 0;
		while(x) stk[tp ++] = x % 10, x /= 10;
		if(!tp) pc(48);
		else while(tp --) pc(stk[tp] + 48); 
	}
}
namespace cqsunny{
	using namespace rm;
	string s1, s2, s3, s4; 
	int main(){
		freopen("travel.in", "r", stdin);
		freopen("travel.out", "w", stdout);
		cin >> s1 >> s2 >> s3 >> s4;
		if(s1 == s3){
			if(s2[0] == s4[0] && s2[1] == s4[1]){
				if(s2[2] <= 'C' && s4[2] <= 'C'){
					if(abs(s2[2] - s4[2]) == 1){
						printf("1111");
					}
					else{
						printf("1110");
					}
				}
				else if(s2[2] >= 'D' && s4[2] >= 'D'){
					if(s2[2] != s4[2]){
						printf("1111");
					}
					else{
						printf("1110");
					}
				}
				else{
					printf("1100");
				}
			}
			else{
				printf("1000");
			}
		}
		else{
			printf("0000");
		}
		flush();
		return 0;
	}
}
int main(){
	return cqsunny::main();
}
