#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,l,a[N],ans,k;
string c[N],s[510];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i]>>c[i],l+=a[i];
	for(int i=1; i<=n; i++)
		for(int j=1; j<=a[i]; j++)
			s[++k]=c[i];
	for(int i=1; i<=l/2; i++) {
		int j=l-i+1;
		if(s[i]!=s[j])ans++;
	}
	cout<<ans;
	return 0;
}