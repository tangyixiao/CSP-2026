#include<bits/stdc++.h>
using namespace std;
vector<char> str_;
int main() {
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
//	string str = "";
	long long cnt = 0;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		string st;
		int a;
		char b;
		cin >> a >> b;
//		st = a * b;
//		str += st;
		for(int j = 0; j < a; ++ j)
			str_.push_back(b);
		cnt += a;
	}
//	cout << str << endl;
//	cout << cnt << '\n';
	-- cnt;
	long long cnt2 = 0;

	if(cnt % 2) {
		for(int i = 0; i < (cnt - 1)/2; ++ i) {
			if(str_[i] != str_[cnt -  i])
				++ cnt2;
		}
	} else {

		for(int i = 0; i < (cnt)/2; ++ i) {
			if(str_[i] != str_[cnt -  i])
				++ cnt2;
		}
	}
	cout << cnt2;
	return 0;
}
