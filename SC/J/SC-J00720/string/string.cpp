#include<bits/stdc++.h>
using namespace std;
long long t , a , ans;
string s , s1 , s2;
char c;
int main(){
	cin >> t;
	while(t--){
		cin >> a >> c;
		while(a--) s += c;
	}
	if(s.size() % 2 == 0){
		for(int i = 0; i <= s.size() / 2 - 1; i++) s1 += s[i];
		for(int i = s.size(); i > s.size() / 2; i--) s2 += s[i];
		for(int i = 0; i <= s.size() / 2 - 1; i++) if(s1[i] != s2[i]) ans++;
	}else{
		for(int i = 0; i <= (s.size() - 1) / 2 - 1; i++) s1 += s[i];
		for(int i = s.size() - 1; i > (s.size() - 1) / 2; i--) s2 += s[i];
		for(int i = 0; i <= (s.size() - 1) / 2 - 1; i++) if(s1[i] != s2[i]) ans++;
	}
	cout << ans;
	return 0;
} 