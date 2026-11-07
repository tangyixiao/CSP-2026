#include<bits/stdc++.h>
using namespace std;
#define int long long
string s,a;
int n,b,c,e,d;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> b >> a;
		c += b;
		for(int j = 0;j < b;j++){
			s += a;
		}
	}
	e = c - 1;
	for(int i = 0;i < c / 2;i++){
		if(s[i] != s[e]){
			s[e] = s[i];
			d++;
		}
		e--;
	}
	cout << d;
	return 0;
}