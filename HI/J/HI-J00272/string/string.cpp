#include <bits/stdc++.h>
using namespace std;
long long n;string h;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long m=0;
	for(int i=0;i<n;i++){
		long long s1;
		string s2;
		cin >> s1 >>s2;
		m+=s1;
		while(s1--) h+=s2;
	}
	long long ans=0;
	for(long long i=0;i<=m/2;i++){
		if(h[i]!=h[m-i]) ans++;
	}
	cout << ans;
	return 0;
}

