#include <bits/stdc++.h>
using namespace std;

bool huiwen(string s, int l){
	for(int i = 0; i < l; i ++){
		if(s[i] != s[l-i-1]) return 0;
	}
	return 1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, ai;
	cin >> n;
	string s, c;
	long long l = 0;
	for(int i = 0; i < n; i ++){
		cin >> ai >> c;
		l += ai;
		for(int j = 0; j < ai; j ++) s = s + c;
	}
	int cnt = 0;
	for(int z = 0; z < l/2+1; z ++){
		if(huiwen(s,l)){
			cout << cnt;
			return 0;
		}
		s[l-z] = s[z];
		cnt ++;
	}
	cout << cnt-1;
	return 0;
} 
