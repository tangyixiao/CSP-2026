#include<bits/stdc++.h>
using namespace std;
int n;
long long a;
string c;
string s;
void hw(string s){
	int t = (s.size() - 1) / 2;
	int cnt = 0;
	for(int i = 1 ; i <= t ; i++){
		if(s[i] != s[s.size() - i]){
			cnt++;
		}
	}
	cout << cnt << endl;
	return;
}
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a >> c;
		for(int i = 1 ; i <= a ; i++){
			s = s + c;
		}
	}
	s = '@' + s;
	hw(s);
	return 0;
}
