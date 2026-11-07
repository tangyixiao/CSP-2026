#include <bits/stdc++.h>
using namespace std;
int s[100005];
char c[100005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char b;
		cin>>s[i]>>c[i];
	}
	if(n=1)cout<<0;
	for(int i=0;i<n;i++){
		if(c[i]=c[i+1])cout<<0;
	}
	return 0;
}
