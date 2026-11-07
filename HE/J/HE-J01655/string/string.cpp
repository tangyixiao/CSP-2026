#include <bits/stdc++.h>
using namespace std;
string str;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long siz = 0;
	cin >> n;
	for(int i = 1;i <= n;i++){
		int x;
		char ch; 
		cin >> x >> ch;
		siz += x;
		while(x--) str.push_back(ch);
	}
//	cout << siz;
	long long cnt = 0;
	for(int i = 0;i < siz / 2;i++) cnt += (str[i] != str[siz - i - 1]);
	cout << cnt;
	
	return 0;
}
