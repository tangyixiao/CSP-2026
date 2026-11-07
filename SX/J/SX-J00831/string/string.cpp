#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	long long n;
	cin >> n;

	string s = "";
	for(long long i = 0;i < n;i++){
		long long t;
		string tmp;

		cin >> t >> tmp;

		for(long long j = 0;j < t;j++){
			s = s + tmp;
		}
	}

	long long cnt = 0, lenth = s.size();
	for(long long i = 0;i < lenth;i++){
		if(s[i] != s[lenth + 1 - i]){
			cnt++;
		}
	}

	if(lenth %2 != 0){
		cnt -= 1;
	}

	cout << cnt /2;

	return 0;
}