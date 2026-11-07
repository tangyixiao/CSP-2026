#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, m, cnt = 0, sum = 0;
	string t = "", s = "";
	cin >> n;
	for(int i = 1; i <= n; i++){
		char x;
		cin >> m >> x;
		for(int j = 1; j <= m; j++) s += x;
	}
	for(int i = s.size() - 1; i >= 0; i--) t += s[i];
	if(s == t) cout << 0;
	else if(s.size() % 2 == 0){
		for(int i = 0; i < s.size() / 2; i++){
			if(s[i] != t[i]) cnt++;
		}
		for(int i = s.size() / 2; i < s.size(); i++){
			if(s[i] != t[i]) sum++;
		}
		cout << min(sum, cnt);
	}else{
		for(int i = 0; i < s.size() / 2; i++){
			if(s[i] != t[i]) cnt++;
		}
		for(int i = (s.size() + 1) / 2; i < s.size(); i++){
			if(s[i] != t[i]) sum++;
		}
		cout << min(sum, cnt);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}