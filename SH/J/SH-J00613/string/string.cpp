#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s,t;
	for(int i = 1;i <= n;i ++){
		long long x;
		string c;
		cin >> x >> c;
		for(int i = 1;i <= x;i ++){
			t += c;
		}
	}
	s = " " + t;
	long long cnt = 0;
	for(long long i = 1;i <= (s.size()-1)/2;i ++){
		if(s[i] != s[s.size()-i]){
			cnt ++;
		} 
	}
	cout << cnt;
	
	return 0;
}
