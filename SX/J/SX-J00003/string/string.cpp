#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],cnt;
char c[100005];
string s;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool f=1;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
		if(i>1&&c[i]!=c[i-1])
			f=0;
	}
	if(f)
		cout<<0;
	else {
		for(int i=1,j=n; i<=j; i++,j--) {
			if(a[i]==a[j]) {
				if(c[i]!=c[j])
					cnt+=a[i];
				else
					continue;
			} else {
				if(c[i]!=c[j])
					cnt+=max(a[i],a[j]);
				else
					cnt+=max(a[i],a[j])-min(a[i],a[j]);
			}
		}
		cout<<cnt;
	}
	return 0;
}
