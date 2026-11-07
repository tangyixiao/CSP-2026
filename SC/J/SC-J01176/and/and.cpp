#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int n,m,x,ans;
vector<int> a,b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;++i){
		cin >> x;
		a.emplace_back(x);
	}
	for (int j = 31;~j;--j){
		b.clear();
		for (auto c:a)
			if (c >> j & 1) b.emplace_back(c);
		if (b.size() >= m){
			a = b;
			ans ^= 1 << j;
		}
	}
	cout << ans;
	return 0;
}