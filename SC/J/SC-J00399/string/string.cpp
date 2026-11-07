#include <bits/stdc++.h>
using namespace std;
int main{
	string s[10005];
	string m;
	int a,n,l = 0;
	cin >> a;
	for(int i = 0;i < a;i ++){
		cin >> n >> m;
		for (int j = 0;j < n;j ++){
			a[j] = a;
		}
	}
	for(int i = 0;i != '\0';i ++){
		if (a[i] != a[n-i]){
			l ++;
		}
	}
	cout << l;
	return 0;
}