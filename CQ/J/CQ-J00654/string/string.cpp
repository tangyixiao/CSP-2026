#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, char>
#define fi first
#define se second
const int N = 2e5 + 5;
int n, a[N], len[N], b1[N], suf[N];
char c[N], d1[N];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0) -> ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i], len[i] = len[i-1] + a[i];
	for(int i=n;i>=1;i--) suf[i] = suf[i+1] + a[i];
	int x = len[n] / 2;
	stack<pii> s1, s2;
	int op = 0;
	for(int i=1;i<=n;i++){
		if(len[i+1] > x){
			op = i;
			break;
		}
	}
	if(len[op] < x) s1.push({x - len[op], c[op+1]});
	for(int i=op;i>=1;i--) s1.push({a[i], c[i]});
	for(int i=n;i>=1;i--){
		if(suf[i-1] > x){
			op = i;
			break;
		}
	}
	if(suf[op] < x) s2.push({x - suf[op], c[op-1]});
	for(int i=op;i<=n;i++) s2.push({a[i], c[i]});
	int w = 0;
	while(!s2.empty() && !s1.empty()){
		int cur1 = s1.top().fi, cur2 = s2.top().fi;
		char ch1 = s1.top().se, ch2 = s2.top().se;
		s1.pop(); s2.pop();
		int l = min(cur1, cur2);
		if(ch1 == ch2){
			cur1 -= l; cur2 -= l;
			if(cur1 != 0) s1.push({cur1, ch1});
			if(cur2 != 0) s2.push({cur2, ch2});
		}else{
			cur1 -= l; cur2 -= l;
			w += l;
			if(cur1 != 0) s1.push({cur1, ch1});
			if(cur2 != 0) s2.push({cur2, ch2});
		}
	}
	cout<<w<<'\n';
	return 0;
}
/*
5
3 b
2 f
4 b
3 c
1 d
*/ 
