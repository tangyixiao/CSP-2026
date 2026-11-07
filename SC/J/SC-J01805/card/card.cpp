#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int n,m,a[500005],cnt[300005];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++) {
		set <int> se;
		stack <int> st;
		for(int j = i;j <= n;j++) {
			if(se.find(a[j]) != se.end()) {
				while(st.top() != a[j]) {
					se.erase(st.top());
					st.pop();
				}
			}else{
				se.insert(a[j]);
				st.push(a[j]);
			}
		}
		for(int j = 1;j <= m;j++) {
			if(se.find(j) != se.end()) {
				cnt[j] ++;
			}
		}
	}
	for(int i = 1;i <= m;i++) {
		cout << cnt[i] <<" ";
	}
	return 0;
}