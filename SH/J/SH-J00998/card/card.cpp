#include <bits/stdc++.h>

using namespace std;

const int N = 5e5+5;
int a[N];
bool A = true;

int main() {
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<int> v(m+1,0);
	vector<int> ans(m+1,0);
	for(int i = 1;i <= n;i++) {
		cin >> a[i];
		if(a[i] < a[i-1]) A = false;
	}
	if(A) {
		cout << endl;
		for(int i = 1;i <= n;i++) {
			v[a[i]] += 1;
		}
		vector<int> x(m+1,0);
		x[1] = v[1];
		cout << x[1] << ' ';
		for(int i = 2;i <= m;i++) {
			cout << x[i-1] + v[i] << ' ';
			x[i] = x[i-1] + v[i];
		}
		return 0;
	}
	if(m == 2) {
		int s134 = 0,s234 = 0;
		for(int i = 1;i <= n;i++) {
			if(a[i] == 1) s134++;
			else s234++;
		}
		if(a[n] == 1) cout << n << ' ' << s234;
		else if(a[n] == 2) cout << s134 << ' ' << n;
		return 0;
	}
	int now = 1;
	for(int k = 1;k <= n;k++) {
		for(int i = k;i <= n;i++) {
			if(v[a[i]] == 0) {
				v[a[i]] = now;
			}else{
				now = v[a[i]];
				for(int j = 1;j <= m;j++) {
					if(v[j] > now) v[j] = 0;
				}
			}
			now++;
		}
		for(int j = 1;j <= m;j++) {
			if(v[j] != 0) {
				ans[j]++;
				v[j] = 0;
			}
		}
	}
	for(int j = 1;j <= m;j++) {
		cout << ans[j] << ' ';
	}
	return 0;
}

