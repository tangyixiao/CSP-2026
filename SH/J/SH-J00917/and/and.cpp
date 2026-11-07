#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N];
bool f[N];
int n,m,maxn = -1,ans = 0,maxa = 0,maxb =0,yun = 0;
string ejz(int n) {
	string a = "";
	while(n!=0) {
		a = a+char(n%2+'0');
		n/=2;
	}
	return a;
}
int yu(string a,string b) {
	int ans = 0;
	int len = min(a.size(),b.size());
	for(int i = 0; i < len; i++) {
		if(a[i] == '1'&& b[i] == '1') {
			ans += pow(2,i);
		}

	}
	return ans;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn,a[i]);
		f[i] = true;
	}
	if(m==1) {
		cout << maxn;
		return 0;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(i != j) {
				yun = yu(ejz(a[i]),ejz(a[j]));
				if(yun > ans) {
					ans = yun;
					maxa = i,maxb = j;
				}

			}
		}
	}
	f[maxa] = false;
	f[maxb] = false;
	if(m ==2) {
		cout << ans;
		return 0;
	}m = m-2;
	while(m--) {
		int fans = 0;
		for(int i = 1; i <= n; i++) {
			if(f[i]) {
				//cout << a[i] << endl;
				int yun =yu(ejz(a[i]),ejz(ans)) ;
				if(yun > fans) {
					fans = yun;
					maxa = i;
				}
			}
		}
		ans = fans;
		f[maxa] = false;

	}

	cout << ans;
	return 0;
}

