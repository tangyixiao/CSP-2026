#include<bits/stdc++.h>
#define ios ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int N = 2e5 + 5;

string c1, c2;
string s1, s2;

int n, ans;
int a[N];
string s;
char c;

void ca(int n){
	for(int i = 0;i < n / 2;i ++){
		if(s[i] != s[n - i - 1]) ans ++;
	}
	cout << ans;
}

signed main(){
//	ios;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> a[i] >> c;
		for(int j = 1;j <= a[i];j ++){
			s += c;
		}
	}
//	cout << s.size();
	if(s.size() % 2 == 0){
		ca(s.size());
	}else{
		ca(s.size());
	}
	
	return 0;
}