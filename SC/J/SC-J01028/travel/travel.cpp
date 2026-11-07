#include <bits/stdc++.h>
using namespace std;
bool check(string s1, string s2){
	return ('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C')||('D'<=s1[2]&&s1[2]<='F'&&'D'<=s2[2]&&s2[2]<='F');
}
bool Check(string s1, string s2){
	return (s1[2]=='A'&&s2[2]=='B'||s1[2]=='B'&&s2[2]=='C'||s1[2]=='D'&&s2[2]=='F');
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travle.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool f1 = (c1 == c2);
	bool f2 = (f1 && s1[0] == s2[0] && s1[1] == s2[1] && s1[2] != s2[2]);
	bool f3 = (f2 && check(s1, s2));
	bool f4 = (f3&&(Check(s1, s2)||Check(s2, s1)));
	cout << f1 << f2 << f3 << f4;
	return 0;
} 