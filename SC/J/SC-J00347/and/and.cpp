#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

namespace fio{
	constexpr int S = 1 << 20;
	char buf[S];
	size_t idx, sz;
	int gc(){
		if(idx == sz){
			sz = fread(buf, 1, S, stdin);
			idx = 0;
			if(!sz)
				return EOF;
		}
		return buf[idx++];
	}
	template <typename T>
	bool read(T& x){
		x = 0;
		T f = 1;
		int c = gc();
		while(c != EOF && (c < '0' || c > '9')){
			if(c == '-')
				f = -1;
			c = gc();
		}
		if(c == EOF)
			return false;
		while(c >= '0' && c <= '9'){
			x = (x << 3) + (x << 1) + (c ^ 48);
			c = gc();
		}
		x *= f;
		return true;
	}
	template <typename T, typename... Args>
	bool read(T&x, Args&... args){
		return read(x) && read(args...);
	}
}

int main(){
//	freopen("temp.in", "r", stdin);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	fio::read(n, m);
	vector <int> a(n + 1);
	for(int i = 1; i <= n; ++i)
		fio::read(a[i]);
	int ans = 0;
	vector <int> nw(n);
	iota(nw.begin(), nw.end(), 1);
	for(int i = 30; i >= 0; --i){
		vector <int> one;
		for(int j = 0; j < nw.size(); ++j){
			if((a[nw[j]] >> i) & 1)
				one.push_back(nw[j]);
		}
		if(one.size() >= m){
			nw = one;
			ans += 1 << i;
		}
		else if(nw.size() < m)
			break;
	}
	cout << ans << '\n';
	return 0;
}