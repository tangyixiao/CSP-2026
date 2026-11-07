#include <bits/stdc++.h>
using namespace std;
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s;
	long long cnt = 0,i = 0;
	while (n--){
		long long a;
		char b;
		cin >> a >> b;
		for(long long j = 0;j < a;j++) s[i++] = b;
	}
	for(long long j = 0;j < (i - 1) / 2;j++)
		if(s[j] != s[i - j - 1]) cnt++;
	cout << cnt;
	return 0;
}
