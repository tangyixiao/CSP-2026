#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	char c;
	int x;
	for(int i=1; i <= n; i++){
		cin >> x >> c;
		for(int j=1; j <= x; j++){
			s+=c;
		}
	}
	int cnt=0;
	for(int i=0; i < s.size()/2; i++){
		if(s[i] != s[s.size()-1-i]) cnt++;
	}
	cout << cnt;
	return 0;
}
