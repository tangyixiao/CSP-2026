#include<bits/stdc++.h>
using namespace std;

string s;
long long l;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, ans=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		long long a;
		char c;
		cin >> a >> c;
		for(int j=1; j<=a; j++){
			s += c;
		}
		l += a;
	}
	for(int i=0; i<ceil(l/2.0); i++){
		if(s[i] != s[l-i-1]){
			ans++;
		}
	}
	cout << ans;
	//Ê¯É½´úÂë 
	
	return 0;
}
