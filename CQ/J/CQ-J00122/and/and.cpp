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
	const int N = 2e5 + 10;
	int n, m;
	int a[N];
	int tr[6200010], ls[6200010], rs[6200010];
	vector<int> vc, tmp;
	int main(){
//		freopen("and5.in", "r", stdin);
		freopen("and.in", "r", stdin);
		freopen("and.out", "w", stdout);
		n = u_read(), m = u_read();
		for(int i = 1; i <= n; ++ i) a[i] = u_read();
		int cnt = 1;
		for(int i = 1; i <= n; ++ i){
			int rt = 1;
			++ tr[rt];
			for(int j = 30; j >= 0; -- j){
				bool t = 0;
				if(a[i] & (1 << j)) t = 1;
				if(!t){
					if(!ls[rt]) ls[rt] = ++ cnt;
					rt = ls[rt];
				}
				else{
					if(!rs[rt]) rs[rt] = ++ cnt;
					rt = rs[rt];
				}
				++ tr[rt];
			}
		}
		vc.emplace_back(1);
		int ans = 0;
		for(int i = 30; i >= 0; -- i){
			int sum = 0;
			for(auto j : vc){
				if(rs[j]) sum += tr[rs[j]];
			}
			if(sum >= m){
				ans += 1 << i;
				for(auto j : vc){
					if(rs[j]) tmp.emplace_back(rs[j]); 
				}
				vc.swap(tmp);
				tmp.clear();
			}
			else{
				for(auto j : vc){
					if(ls[j]) tmp.emplace_back(ls[j]);
					if(rs[j]) tmp.emplace_back(rs[j]); 
				}
				vc.swap(tmp);
				tmp.clear();
			}
		}
		printf("%d", ans);
		flush();
		return 0;
	}
}
int main(){
	return cqsunny::main();
}
