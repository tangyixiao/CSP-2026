#include <bits/stdc++.h>
using namespace std;
int a[200005];
int nb(int k,int n, int m){
	for(int i = m ;i <= n - k; i++){
		--k;
		++m;
		if(m == n)
			return a[i];
		else 
			return a[i] & nb(k, n, m);
	}
}
bool cmp(int a,int b){
	return a > b;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, ma = -100;
	cin >> n >> m;
	if (n == m){
		cin >> a[1];
		for (int i = 2 ;i <= n; ++i) {
			cin >> a[i];
			a[i] &= a[i - 1];
		}
		cout << a[n];
	}
	else if (m == 1){
		for (int i = 1; i <= n; ++i)
			cin >>a[i];
		sort(a + 1,a + 1 + n, cmp);
		cout << a[1];
	}
	else if (m == 2){
		for (int i = 1; i <= n; ++i)
			cin >>a[i];
		sort(a + 1,a + 1 + n, cmp);
		for(int i = 1; i <= n - 1; ++i)
			for(int j = i + 1; j <= n; ++j)
				ma = max(ma,a[i] & a[j]);
		cout << ma;
	}
	else if (m == 3){
		for (int i = 1; i <= n; ++i)
			cin >>a[i];
		sort(a + 1,a + 1 + n, cmp);
		for(int i = 1; i <= n - 2; ++i)
			for(int j = i + 1; j <= n - 1; ++j)
				for(int p = j + 1; p <= n; ++p)
					ma = max(ma,a[i] & a[j] & a[p]);
		cout << ma;
	}
	else if (m == 4){
		for (int i = 1; i <= n; ++i)
			cin >>a[i];
		sort(a + 1,a + 1 + n, cmp);
		for(int i = 1; i <= n - 3; ++i)
			for(int j = i + 1; j <= n - 2; ++j)
				for(int p = j + 1; p <= n - 1; ++p)
					for(int k = p + 1; k <= n; ++k)
						ma = max(ma,a[i] & a[j] & a[p] & a[k]);
		cout << ma;
	}
	else if (m == 5){
		for (int i = 1; i <= n; ++i)
			cin >>a[i];
		sort(a + 1,a + 1 + n, cmp);
		for(int i = 1; i <= n - 4; ++i)
			for(int j = i + 1; j <= n - 3; ++j)
				for(int p = j + 1; p <= n - 2; ++p)
					for(int k = p + 1; k <= n - 1; ++k)
						for(int l = k + 1; l <= n - 1; ++l)
							ma = max(ma,a[i] & a[j] & a[p] & a[k] & a[l]);
		cout << ma;
	}
	else if (n <= 20){
		for (int i = 1; i <= n; ++i) cin >> a[i];
		sort(a + 1,a + 1 + n, cmp);
		for(int i = 1; i <= n - m; ++i){
			ma=max(nb(m, n , i) & a[i], ma);
		}
		cout << ma ;
	}
	else if(m = n - 1){
		for(int i = 1; i <= n; ++i)	cin >>a[i];
		sort(a+1,a+1+n,cmp);
		for(int i =2;i <n;i++){
			a[i]&=a[i-1]; 
		}
		cout << a[n - 1];
	}
	else{
		for(int i = 1; i <= n; ++i)	cin >>a[i];
		sort(a+1,a+1+n,cmp);
		for(int i =2;i <= m;i++){
			a[i]&=a[i-1]; 
		}
		cout<<a[m];
	}
	return 0;
} 
