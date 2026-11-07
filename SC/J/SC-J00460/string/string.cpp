#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int n;
long long k[200001] = {};
string str = "";
char b[200001];
string repeat(char c, long long t){
	string ans = "";
	for(long long i = 1; i <= t; i++){
		ans += c;
	}
	return ans;
}
string rev(string a){
	string ans = "";
	for(int i = a.length() - 1; i >= 0; i--){
		ans += a[i];
	}
	return ans;
}
int two(){
	string p1 = "", p2 = "";
	int len = str.length() / 2, ans = 0;
	for(int i = 0; i < len; i++){
		p1 += str[i];
	}
	p1 = rev(p1);
	for(int i = len + 1; i < len * 2; i++){
		p2 += str[i];
	}
	for(int i = 0; i < p1.length(); i++){
		if(p1 != p2) ans++; 
	}
	return ans;
}
int one(){
	string p1 = "", p2 = "";
	int len = str.length() / 2 + 1, ans = 0;
	for(int i = 0; i < len - 1; i++){
		p1 += str[i];
	}
	p1 = rev(p1);
	for(int i = len; i < len * 2; i++){
		p2 += str[i];
	}
	for(int i = 0; i < p1.length(); i++){
		if(p1 != p2) ans++; 
	}
	return ans;
}
bool isRev(){
	string str1 = "";
	str1 = rev(str1);
	return str == str1;
}
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		long long t;
		char a;
		cin >> t >> a;
		b[i] = a;
		k[i] = t;
		str += repeat(a, t);
	}
	if(n == 1 || isRev()) cout << 0;
	else if(n == 2){
		if(b[1] == b[2]){
			cout << 0;
		}
		else{
			cout << min(k[1], k[2]);
		}
	}
	else{
		if(str.length() % 2 == 0){
			cout << two();
		}
		else{
			cout << one();
		}
	}
	return 0;
}