#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++){
		int cnt;
		char c;
		cin >> cnt >> c;
		while(cnt--){
			s += c;
		}
	}
	string s1 = s;
	
	bool f = true;
	long long cnt = 0;
	string s2;
	long long len1 = s.size() - 1;
	for(int i = s.size()-1; i >= 0; i--){
		if(s1[i] == s[len1 - i]){
			f = true;
		} else {
			f = false;
		}
	}
	if(f == true){
		cout << 0;
		return 0;
	}
	
	long long len = s.size()-1;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[len - i]){
			s[i] = s[len - i];
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
