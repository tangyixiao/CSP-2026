#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, cnt = 0, sum = 0, a;
	string s;
	char ch;
	cin >> n;
	while (n--){
		cin >> a >> ch;
		for (int i = sum;i <= a + sum;i++) s[i] = ch;
		sum += a;
	}
	for (int i = 1;i <= sum / 2;i++){
		if (s[i] != s[sum - i + 1]) cnt++;
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
}
