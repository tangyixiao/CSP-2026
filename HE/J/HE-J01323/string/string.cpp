#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5+5;
string s;
int n;
long long t;
char c;
char k;
long long ans = 0;
bool f;
int main(){
	
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> t >> c;
		for(long long j = 1; j <= t; j++){
			s += c;
		}
		if(k != c){
			f = true;
		}else{
			k = c;
		}
	}
	if(!f){
		cout << 0;
		return 0;
	}
	long long len = s.size();
	for(long long i = 0; i < len / 2; i++){
		if(s[i] != s[len - 1 - i]){
			ans++;
			s[i] = s[len - 1 - i];
		}
	}
	cout << ans;
	
	return 0;
}
