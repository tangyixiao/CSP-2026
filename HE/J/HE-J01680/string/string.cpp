#include <bits/stdc++.h>
using namespace std;

string S;
long long n, ans, L;
	
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	if(n == 1) {
		cout << 0;
		return 0;
	}
	
	for(int i=1; i<=n; i++) {
		int p;
		char q;
		cin >> p >>q;
		L+=p;
		for(int j=1; j<=p; j++)
			S += q;
	}
	
	for(int i=0; i<L/2; i++)
		if(S[i] != S[L-1-i])
			ans+=1;
	cout <<ans;
	return 0;
}
