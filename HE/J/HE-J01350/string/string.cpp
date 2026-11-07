#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
    
	long long t;
	char c;
	string s;	
	for(int i = 1; i <= n; i++){
	    cin >> t >> c;
		while(t--){
			s += c;
		}     
	}
	
	long long cnt = 0;
	long long len = s.size() / 2;
	for(int i = 1; i <= len; i++){
	    if(s[i] != s[n - i]){
	        cnt++;	
		}	
	}
	
	cout << cnt;
    return 0;
}
