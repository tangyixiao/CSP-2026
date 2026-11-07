#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll l[200010];
char a[200010];
int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in ","r",stdin);
	freopen("string.out","w",stdout);
	ll ans=0;
	cin>>n;
	for (int i=1;i<=n;++i) {
		cin>>l[i]>>a[i];
	}
	for (int i=1,j=n;i<=j;) {
		if (a[i]!=a[j]) {
			if (l[i]<l[j]) {
				l[j]-=l[i];
				ans+=l[i];
				++i;
			}
			else {
				l[i]-=l[j];
				ans+=l[j];
				--j;
			}
		}
		else {
			if (l[i]<l[j]) {
				l[j]-=l[i];
				++i;
			}
			else {
				l[i]-=l[j];
				--j;
			}
		}
	}
	cout<<ans;
	return 0;
}