#include <bits/stdc++.h> 
#define ll long long 
#define rep(i, j, k) for (int i = j; i <= k; i++) 
#define dow(i, j, k) for (int i = j; i >= k; i--) 

const int N = 5e5 + 5; 

int n, m, l, a[N], b[N], nid[N]; 
bool instk[N]; 
int ans[N]; 
int tot, stk[N]; 

void solve5000() {
	rep(i, 1, l) {
		tot = 0; 
//		printf("i:%d\n", i); 
//			rep(k, 1, m) instk[k] = 0; 
		rep(j, i, l) {
			if (instk[b[j]]) {
				while (tot && b[stk[tot]] != b[j]) {
					instk[b[stk[tot]]] = 0; 
					tot--; 
				}
				if (tot && b[stk[tot]] == b[j]) {
					instk[b[stk[tot]]] = 0; 
					tot--; 
				}
			}
			stk[++tot] = j; instk[b[j]] = 1; 
//			rep(k, 1, tot) printf("%d ", stk[k]); putchar('\n'); 
		}
		while (tot) {
//			printf("%d ", stk[tot]); 
			ans[b[stk[tot]]] += nid[i + 1] - nid[i]; 
			instk[b[stk[tot]]] = 0; 
			tot--; 
		}
//		putchar('\n'); 
	}
}
bool checka() {
	rep(i, 1, n - 1) if (a[i] > a[i + 1]) return 0; 
	return 1; 
}
void solvea() {
	rep(i, 1, l) {
		ans[b[i]] = nid[i + 1] - 1; 
	}
}
void solve() {
	std::stack < int > stk; 
	dow(i, n, 1) {
		if (instk[a[i]]) {
			while (!stk.empty() && a[stk.top()] != a[i]) {
				ans[a[stk.top()]] += stk.top() - i; 
				instk[stk.top()] = 0; 
//				printf("%d pop %d\n", i, stk.top()); 
				stk.pop(); 
			}
			if (!stk.empty() && a[stk.top()] == a[i]) {
				ans[a[stk.top()]] += stk.top() - i; 
//				printf("%d pop %d\n", i, stk.top()); 
				stk.pop(); 
			}
			stk.push(i); 
		} else {
			stk.push(i); instk[a[i]] = 1; 
		}
	}
	while (!stk.empty()) {
		ans[a[stk.top()]] += stk.top(); 
		stk.pop(); 
	}
}

signed main() {
//	freopen("card5.in", "r", stdin); 
	freopen("card.in", "r", stdin); 
	freopen("card.out", "w", stdout); 
	
	scanf("%d%d", &n, &m); 
	rep(i, 1, n) scanf("%d", a + i); 
	
	rep(i, 1, n) {
		if (a[i] != a[i - 1]) {
			b[++l] = a[i]; nid[l] = i; 
		}
	}
	nid[l + 1] = n + 1; 
	
//	solvea(); 
	if (l <= 5000) solve5000(); 
	else if (checka()) solvea(); 
	else solve(); 
	
	rep(i, 1, m) printf("%d ", ans[i]); 
//	rep(i, 1, m) printf("%d%c", ans[i], (i == m ? '\n' : ' ')); 
	
	return 0; 
} 