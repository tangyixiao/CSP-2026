#include <bits/stdc++.h>
using namespace std;
int n,a[200005];
char b[200005];
string s;
int main (){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> b[i];
	}
	bool flag1 = 1;
	int num = 0;
	for(int i = 1;i < n;i++){
		if(a[i] != a[i + 1]){
			flag1 = 0;
		}
	}
	if(flag1){
		int g1 = 1,g2 = n;
		for(int i = 1;i <= n / 2;i++){
			if(b[g1] != b[g2]) num += 1;
			g1 ++;
			g2 --;
		}
		long long ddd = a[1];
		ddd *= num;
		cout << ddd;
		return 0;
	}
	//touxiangtong
	bool flag = 1;
	for(int i = 1;i < n;i++){
		if(b[i] != b[i + 1]) flag = 0;
	}
	if(flag){
		cout << 0;
		return 0;	
	} 
	//weixiangtong
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= a[i];j++){
			s += b[i];
		}
	}
	int d1 = 0,d2 = s.length() - 1,nn = 0;
	for(int i = 0;i < s.length() / 2;i++){
		if(s[d1] != s[d2]) nn ++;
	}
	cout << nn;
	//zhengchang
	return 0;
}
