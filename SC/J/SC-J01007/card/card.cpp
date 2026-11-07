#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int ans[500005];
bool f;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if(i>1&&(!(a[i-1]<=a[i]))){
			f=1;
		}
	}
	if(f==0) {
		for(int i=1;i<=m;i++) {
			cout<<n<<" ";
		}
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		bool f[500005] = {0};
		stack<int> t;
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == 0) {
				t.push(a[j]);
				f[a[j]] = 1;
			} else {
				while (t.top() != a[j]) {
					t.pop();
				}
			}
		}
		while (t.size()) {
			ans[t.top()]++;
			t.pop();
		}
	}
	for(int i=1;i<=m;i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
