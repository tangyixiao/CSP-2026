#include<bits/stdc++.h>
using namespace std;

int n;
string s;
long long a;
char c;
long long cnt = 0;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a >> c;
		
		for(int j = 0; j < a; j++){
			s = s + c;
		}
	}
	
	for(int i = 0; i < s.size() / 2; i++){
		if(s[i] != s[s.size() - 1 - i]){
			cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}
