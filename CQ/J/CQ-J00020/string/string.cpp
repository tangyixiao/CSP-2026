#include <bits/stdc++.h>
using namespace std;
//µ÷ÊÔ£º1 2 3 4 5 6 ans ***%
//		T T F T f T 4/6 068%
//			t	t	   17/25
//Can Do.
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string c="";
	while(n--) {
		char s;
		int i;
		cin>>i>>s;
		while(i--) {
			c+=s;
		}
	}
	n=c.size()-1;
	long long m=0,ans=0;
	while(m<n) {
		if(c[n]!=c[m]) {
			ans++;
		}
		++m;
		--n;
	}
	cout<<ans;
	return 0;
}
