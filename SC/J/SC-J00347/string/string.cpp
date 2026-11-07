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
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	fio::read(n);
	ll sum = 0;
	vector <pair <int, int>> a(n + 10);
	for(int i = 1; i <= n; ++i){
		fio::read(a[i].first);
		a[i].second = fio::gc();
		sum += a[i].first;
	}
	ll ans = 0;
	int l = 1, r = n;
	while(l < r){
		if(a[l].second != a[r].second){
			if(a[l].first < a[r].first){
				ans += a[l].first;
				a[r].first -= a[l++].first;
			}
			else if(a[l].first == a[r].first){
				ans += a[l].first;
				++l;
				--r;
			}
			else{
				ans += a[r].first;
				a[l].first -= a[r--].first;
			}
		}
		else{
			if(a[l].first < a[r].first)
				a[r].first -= a[l++].first;
			else if(a[l].first == a[r].first){
				++l;
				--r;
			}
			else
				a[l].first -= a[r--].first;
		}
	}
	cout << ans << '\n';
	return 0;
}