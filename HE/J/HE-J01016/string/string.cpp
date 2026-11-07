#include<bits/stdc++.h>
using namespace std;

int main() {
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	int a[200005];
	char s[200005];
	long long r=0;
	for (int i=1;i<=n;i++) {
		cin >> a[i] >> s[i];
		r+=a[i];
	}
	long long ans=0 , l=1;
	int li=1 ,  ri=n;
	while (li<=ri) {
		if (a[li]==a[ri]) {
			if (s[li]!=s[ri]) {
				ans+=a[ri];
			}
			l+=a[li];
			r-=a[ri];
			li++;
			ri--;
		} else if (a[li]>a[ri]) {
			if (s[li]!=s[ri]) {
				ans+=a[ri];
			}
			l+=a[li];
			r-=a[ri];
			a[li]-=a[ri];
			l-=a[ri];
			ri--;
		} else {
			if (s[li]!=s[ri]) {
				ans+=a[li];
			}
			l+=a[li];
			r-=a[ri];
			a[ri]-=a[li];
			l+=a[li];
			li++;
		}
	}
	cout << ans;
	
	return 0;
}
