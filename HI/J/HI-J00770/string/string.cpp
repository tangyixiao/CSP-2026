#include <bits/stdc++.h> 
using namespace std;
string s = "";

/*
bool huiwen(string s) {
	bool flag = false;
	int len = s.size() - 1;
	string s2;
	int idx = 0;
	for (int i = len;i >= 0;i--) {
		s2[idx] = s1[i];
		idx++;
	}
	if (s2 == s1) flag = true;
	return flag;
}
*/
int huiwen(string s) {
	int len = s.size() - 1;
	int cnt = 0;
	for (int i = len/2;i >= 0;i--) {
		if (s[i] != s[len-i]) cnt++;
 	}
	return cnt;
}
char c[114514];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		int num;
		char c;
		scanf("%d",&num);
		cin >> c;
		for (int j = 1;j <= num;j++) {
			s += c;
		}
	}
	cout << huiwen(s);
	return 0;
}
