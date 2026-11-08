#include<bits/stdc++.h>
using namespace std;
long long a,sum,ans,n,x;
string s1;
long long b[30];
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if(n==1) {
		cout << "0";
		return 0;
	}
	for(int i=1;i<=n;i++) {
		cin >> a >> s;
		if(i==1) s1=s;
		if(s1!=s) x=0;
		sum+=a;
		b[s[0]-96]+=a;
	}
	ans=b[1];
	for(int i=1;i<=26;i++) {
		if(ans<b[i]) {
			ans=b[i];
		}
	}
	if(x) {
		cout << "0";
		return 0;
	}
	cout << sum-ans;
	return 0;
}
