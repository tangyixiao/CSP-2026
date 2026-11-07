#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n;
long long len;
int main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	 
	cin >> n;
	
	string s;
	int t;
	char c;
    for(int i = 1; i <= n; i++){
    	cin >> t >> c;
    	
    	len += t;
    	for(int i = 0; i < t; i++){
    		s += c; 
		}
	}
	
	long long cnt = 0;
	for(long long i = 0; i < len / 2; i++){
		if(s[i] != s[n - i + 1]){
			cnt++;
		}
	}
	
	cout << cnt;
	return 0;
}
