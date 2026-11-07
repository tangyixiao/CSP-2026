#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool c =  (c1 == c2);
	cout << c;
	bool g = c && (s1[1] == s2[1]);
	cout << g;
	bool k = (s1[2]-'A' <= 2 &&  s2[2]-'A' <= 2) || (s1[2] - 'A' > 2 && s2[2] - 'A' > 2);
	if (g){
		cout << k;
	}
	else cout << 0;
	cout << (c && g && k && abs(s1[2] - s2[2])== 1);
	return 0;
}
