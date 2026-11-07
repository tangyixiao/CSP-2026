#include <bits/stdc++.h>
using namespace std;
string s;
int n,sum,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++){
		int t;
		char c;
		cin >> t >> c;
		for(int j = 1;j <= t;j ++){
			s += c;
		}
		sum += t;
	}
	if (sum % 2 == 0){
		for(int i = 0;i <= sum / 2-1;i ++){
			if (s[sum/2-i] != s[sum/2+i+1]) cnt ++;
		}
	}
	else {
		for(int i = 1;i <= sum / 2;i ++){
			if (s[sum/2-i] != s[sum/2+i]) cnt ++;
		}
	}
	cout << cnt;
	return 0;
}
