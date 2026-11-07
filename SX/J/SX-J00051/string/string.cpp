#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long o,cnt = 0;
	cin >> o;
	string a;
	for(long long i = 0; i < o; i++){
		int n;
		char t;
		cin >> n >> t;
	    a.insert(a.end(),n,t);
	}
	for(long long i = 0; i <= (a.size()-1)/2; i++) cnt+=(a[i]!=a[a.size()-i-1]);
	cout << cnt;
	return 0;
}