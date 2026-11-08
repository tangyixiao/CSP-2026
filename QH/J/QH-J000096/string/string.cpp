#include <bits/stdc++.h>
#include <string>
#include <cstdio>
using namespace std; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int s;
	string a[1000001][1000001];
	cin >> s;
	for(int i=0;i<=s;i++){
		for(int j=0;j<=s;j++){
			cin >> a[i][j];
			string b = a[i]*a[i+1]+a[j]*a[j+1];
		}
	}
	cout << 0;
	return 0;
}
