#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long sum = 0;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++){
		int x;
		char y;
		cin >>x >> y;
		while(x--){
			s[s.size()] = y;
		}
	}	
//	string ss = s.reverse(s.begin(), s.end());
	string ss;
	for (int i = 0; i < s.size(); i++){
		ss[i] = s[s.size() - i - 1];
	}
	for (int i = 0; i < s.size()/2; i++){
		if (s[i] != ss[i]) sum++;
	}
	cout << sum/2;
}
