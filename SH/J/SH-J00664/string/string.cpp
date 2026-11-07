#include <bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char ch[200005];
char s[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long p = 0;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		cin >> ch[i];
		for(int j = 1;j <= a[i];j++) s[++p] = ch[i];
	}
	long long ans = 0;
	for(int i = 1;i <= (p+1)/2;i++){
		if(s[p+1-i] != s[i]) ans++;
	}
	cout << ans;
}
