#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s = "";
	int n,cnt = 0,l = 0;
	cin >> n;
	while (n--){
		int a;
		string c;
		cin >> a >> c;
		l += a; 
		while (a--) s = s + c;
	}
	for (int i = 0,j = (l + 1) / 2;i < l / 2;i++,j++)
		if (s[i] != s[j]) cnt++;
	cout << cnt;
	return 0;
}
