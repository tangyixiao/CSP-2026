#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long s[100005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;++i) {
		cin >> s[i];
	}
	for(int i = 1;i <= m;++i) {
		cout << m << " ";
	}
	return 0;
}
