#include<bits/stdc++.h>
using namespace std;
long long n, x=0, ans=0, a, m=0;
string s, b;
void cmp(string y){
	for(int i=0; i<x/2; i++){
		if(s[i] != s[x-i-1]){
			ans++;
		}
	}
	cout << ans;
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		x += a;
		for(int j=0; j<a; j++){
			s = s + b;
		}
	}
	cout << s << endl;
	cmp(s);
	return  0;
}
