#include <bits/stdc++.h>
using namespace std;
struct str{
	int a;
	char c;
}a[200002];
stack<char> s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i].a >> a[i].c;
	}
	for (int i = 1;i <= n/2;i++){
		s.push(a[i].c);
	}
	long long len = 0;
	for (int i = n/2+1;i <= n;i++){
		if (a[i].c != s.top()){
			len += a[i].a;
		}
		if (!s.empty()){
			s.pop();
		}
	}
	cout << len;
	return 0;
}
