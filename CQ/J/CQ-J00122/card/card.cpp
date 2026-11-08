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
	const int N = 5e5 + 10, M = 3e5 + 10;
	int n, m;
	int a[N], b[M], p[N], d[N], deg[N], s[N], ans[M];
	vector<pair<int, int>> vc;
	vector<int> v[N];
	void dfs(int x, int fa){
		for(auto i : v[x]){
			if(i == fa) continue;
			dfs(i, x);
			s[x] += s[i]; 
		}
	}
	int main(){
//		freopen("card6.in", "r", stdin);
		freopen("card.in", "r", stdin);
		freopen("card.out", "w", stdout);
		n = u_read(), m = u_read();
		for(int i = 1; i <= n; ++ i) a[i] = u_read();
		for(int i = 1; i <= n; ++ i){
			if(b[a[i]]){
				vc.emplace_back(b[a[i]], i);
				d[i] = b[a[i]];
				p[d[i]] = i;
			}
			b[a[i]] = i;
		}
		sort(vc.begin(), vc.end());
		int ps = 1;
		for(auto i : vc){
			while(ps <= n && ps <= i.first){
				if(d[ps]) v[i.first].emplace_back(d[ps]), ++ deg[d[ps]]/*, printf("%d %d -> %d %d\n", i.first, i.second, d[ps], p[d[ps]])*/;
				++ ps;
			}
		}
		ps = 1; 
		for(auto i : vc){
			while(ps <= n && ps <= i.first) ++ s[i.first], ++ ps;
//			printf("-%d %d\n", i.first, s[i.first]);
		}
		for(auto i : vc){
			if(!deg[i.first]){
				dfs(i.first, 0);
			}
		} 
		memset(p, 0, sizeof(p));
		for(auto i : vc){
			p[i.first] -= s[i.first];
			p[i.second] += s[i.first];
//			printf("%d %d %d\n", i.first, i.second, s[i.first]);
		}
		for(int i = 1; i <= n; ++ i){
			p[i] += p[i - 1];
			ans[a[i]] += p[i] + i;
//			printf("%d %d\n", i, p[i] + i);
		}
		for(int i = 1; i <= m; ++ i){
			printf("%d ", ans[i]);
		}
		flush();
		return 0;
	}
}
int main(){
	return cqsunny::main();
}
