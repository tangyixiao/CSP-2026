#include<bits/stdc++.h>
using namespace std;
int N=1E+09+5;
int n;
int a;
string w;
string m;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a>>w;
	}
	int cnt=1;
	for(int i=1; i<=n; i++) {
		if(w[i]!=w[i-1]) {
			cnt=0;
		}
	}
	if(cnt=1) {
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
