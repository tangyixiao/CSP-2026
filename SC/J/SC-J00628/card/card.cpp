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
const int N = 5e5 + 10;
int n, m, a[N];
namespace bf{
	bool istk[N];
	int stk[N], top;
	std::vector<int> v[N];
	void solve(){
		for(int i = 1; i <= n; i++){
			top = 0;
			for(int j = i; j <= n; j++){
				if(istk[a[j]]){
					while(istk[a[j]]){
						istk[stk[top]] = false;
						top--;
					}
				}
				stk[++top] = a[j];
				istk[a[j]] = true;
			}
			for(int j = 1; j <= m; j++){
				if(istk[j]){
					v[j].emplace_back(i);
				}
				istk[j] = false;
			}
		}
		for(int i = 1; i <= m; i++){
			printf("%d ", (int)v[i].size());
		}
	}
}
namespace sol{
	bool istk[N];
	int stk[N], top, nxt[N];
	std::vector<int> v[N];
	struct node{
		int pos, i;
		bool operator < (const node &cmp) const{
			if(pos != cmp.pos) return pos < cmp.pos;
			return i < cmp.i;
		}
	};
	struct event{
		int x;
		bool tp;
		bool operator < (const event &cmp) const{
			if(x != cmp.x) return x < cmp.x;
			return tp < cmp.tp;
		}
	};
	std::set<int> st;
	std::set<node> del;
	std::set<event> evt[N];
	void save(int i);
	void kill(int i);
	void save(int i){
		debug("save %d\n", i);
		if(nxt[i]){
			auto l = del.upper_bound(node{i, 0}), r = del.lower_bound(node{nxt[i], 0});
			std::set<int> s;
			for(auto p = l; p != r; p++){
				s.insert(p->i);
			}
			for(auto x : s){
				st.insert(x);
			}
			for(auto x : s){
				evt[a[x]].insert(event{i, 1});
				kill(x);
			}
		}
	}
	void kill(int i){
		debug("kill %d\n", i);
		if(nxt[i]){
			auto l = st.upper_bound(i), r = st.lower_bound(nxt[i]);
			std::set<node> k;
			for(auto p = l; p != r; p++){
				k.insert(node{i, *p});
			}
			for(auto x : k){
				debug("%d ", x.i);
				st.erase(x.i);
			}
			debug("\n");
			for(auto x : k){
				evt[a[x.i]].insert(event{i, 0});
				save(x.i);
			}
		}
	}
	int pos[N];
	void solve(){
		for(int i = n; i >= 1; i--){
			nxt[i] = pos[a[i]];
			debug("nxt[%d] = %d\n", i, nxt[i]);
			pos[a[i]] = i;
		}
		for(int i = n; i >= 1; i--){
			st.insert(i);
			if(!nxt[i]) evt[a[i]].insert(event{i, 1});
			kill(i);
		}
		for(int i = 1; i <= m; i++){
			int ans = 0;
			event lst = event{n, 0};
			evt[i].insert(event{0, 0});
			for(auto p = evt[i].rbegin(); p != evt[i].rend(); p++){
				debug("%d: event %d(%d)\n", i, p->x, p->tp);
				if(lst.tp){
					ans += lst.x - p->x;
				}
				lst = *p;
			}
			printf("%d ", ans);
		}
	}
}
int main(){
	#ifndef STDIO
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	if(n <= 5000) bf::solve();
	else sol::solve();
	END;
}