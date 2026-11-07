#include <bits/stdc++.h>
using namespace std;
bool judge(string s){
	string m = s;
	reverse(s.begin(),s.end());
	if(m == s){
		return true;
	}
	return false;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>> n;
	string s = "";
	for(int i = 1;i <= n;i++){
		int num;
		char c;
		cin>> num >> c;
		for(int j = 1;j <= num;j++){
			s += c;
		}
	}
	if(judge(s) == true){
		cout<< 0;
		return 0;
	}
	int mid;
	if(int(s.size()) % 2 == 0){
		mid = s.size() / 2 - 1;
	}
	else{
		mid = s.size() / 2;
	}
	long long cnt = 0;
	for(int i = mid + 1;i < s.size();i++){
		if(s[s.size() - i - 1] != s[i]){
			cnt++;
		}
	}
	cout<< cnt;
	return 0;
}
