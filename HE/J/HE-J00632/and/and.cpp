#include <bits/stdc++.h>

using namespace std;

const int N = 200010;
int n, m;
int a[N];
string s[N] = {};

int maxlen = 0;
string to2(int a, int i)
{
	string c = "";
	while (a){
		c += a%2+'0';
		a = a/2;
	}
	int len = c.size();
	maxlen = max(maxlen, len);
	return c;
}

int main ()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i=1; i<=n; i++){
		cin >> a[i];
		s[i] = to2(a[i], i);
	}
	
	sort(a+1, a+n+1);
	int ans=a[n];
	for (int i=n-1; i>=n-m+1; i--){
		ans = ans & a[i];
	}
	cout << ans;
	

	
//	int h;
//	string c = "";
//	cin >> h;
//	while (h){
//		c += h%2+'0';
//		h = h/2;
//	}cout << c << endl;	
	
	return 0;
}
