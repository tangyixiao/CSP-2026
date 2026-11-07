#include <bits/stdc++.h>
using namespace std;

long long n;
char s[1000000000];
long long m;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	long long d = 0;
	for(long long i = 1;i<=n;i++){
		long long a;
		char b;
		cin >> a >> b;
		m = m + a;
		for(long long j = 1;j<=a;j++){
			s[d] = b;
			d++;
		}
	}
	for(long long i = 0;i<m/2;i++){
		if(s[i]!=s[m-1-i]){
			s[m-1-i] = s[i];
			ans++;
		}
	}
	cout << ans;
	return 0;
}




