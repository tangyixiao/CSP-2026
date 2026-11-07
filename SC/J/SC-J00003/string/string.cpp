#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	
	int n;
	cin >> n;
	long long a;
	long long length = 0,ans = 0;
	string c,endstr;
	
	for (int i = 1;i <= n;i++) {
		cin >> a >> c;
		for (long long j = 1;j <= a;j++) {
			endstr += c;
			length++;
		}
	}
	
	for (long long i = 0;i <= length / 2;i++) {
		if (endstr[i] != endstr[length - i - 1])
			ans++;
	}
	
	cout << ans;
	
	return 0;
}