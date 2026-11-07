#include<bits/stdc++.h>
using namespace std;
int n,L,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		int x;
		char ch;
		cin >> x >> ch;
		L += x;
		for(int j = 0;j < x;j++) s += ch;
	}
	for(int i = ceil(L / 2.0);i < L;i++){
		if(s[i] != s[L - 1 - i]) ans++;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
