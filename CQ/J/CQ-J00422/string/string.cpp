#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int huiwen(string s1){
	int sum = 0;
	int m = s1.size();
	int l = 0, r = m - 1;
	for(int i = 1; i <= m / 2; i ++ ){
		if(s1[l] != s1[r]) sum ++ ;
		l ++ ;
		r -- ; 
	}
	return sum;
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int a;
	char b;
	for(int i = 1; i <= n; i ++ ){
		cin >> a >> b;
		for(int i = 1; i <= a; i ++ ){
			s += b;
		}
	}
	cout << huiwen(s);
	return 0;
}
