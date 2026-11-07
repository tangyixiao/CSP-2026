#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long a[500005], cntm[300005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	scanf("%lld%lld", &n, &m);
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	long long xb = 1;
	while(xb <= n){
		unordered_map<long long, long long> um;
		deque<long long> t;
		for(int i = xb; i <= n; i++){
			bool f = false;
			if(um[a[i]] != 0){
				f = true;
				while(!t.empty() && t.back() != a[i]){
					um[t.back()]--;
					t.pop_back();
				}
				if(!t.empty() && t.back() == a[i]){
					um[t.back()]--;
					t.pop_back();
				}
			}
			t.push_back(a[i]);
			if(f == true) um[a[i]] = 1;
			else um[a[i]]++;
		}
		for(auto e : t) cntm[e]++;
		xb++;
	}
	
	for(int i = 1; i <= m; i++){
		if(i > 1) cout << " ";
		cout << cntm[i];
	}
	
	return 0;
}

