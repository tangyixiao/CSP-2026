#include <bits/stdc++.h>
using namespace std;
int main ()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
 	int n, cnt = 0, a, x = 0;
 	char c;
 	string s;
 	cin >> n;
 	for (int i = 1; i<=n; i++){
 		cin >> a >> c;
 		for (int j = 1; j<=a; j++){
 			s += c;	
		}
	}
	while(s[x] != s[s.size()-1-x]){
		s[x] = s[s.size()-1-x];
		x++;
		cnt++;
	}
	cout << cnt;
	return 0;
} 