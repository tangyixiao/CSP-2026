#include <bits/stdc++.h>
using namespace std;
bool convert(char c) {
	return c >= 'D';
}
int di(char c) {
	if(c<'F') return c-'A';
	else return c-'B';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a = c1 == c2;
	bool b = a and s1[0] == s2[0] and s1[1] == s2[1];
	bool c = b and convert(s1[2]) == convert(s2[2]);
	bool d = c and abs(di(s1[2]) - di(s2[2])) <= 1;
	cout<<a<<b<<c<<d;

}