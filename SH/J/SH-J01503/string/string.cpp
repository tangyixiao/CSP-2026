#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,z=0,sa = 0;
	cin >> n;
	for (int i=1;i<=n;i++) {
		int a;
		char c;
		cin >> a >> c;
		z+=a;
		for (int j=1;j<=a;j++) {
			s += c;
		}
		
	}
	
	if (s.length() == 1) {
		cout << 0;
		return 0;
	}
	
	int l= z/ 2;
	for (int i=0;i<l;i++) {
		char x = s[i];
		char y = s[z - i-1];
		if (x==y) {
			sa++;
		}
	}
//	cout<< sa;
	if (l == sa) {
		cout << 0;
		return 0;
	}
	
	cout << (l -sa);
	
	return 0;
}
