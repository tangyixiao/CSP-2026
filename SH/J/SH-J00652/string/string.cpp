#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[200001];
ll n,b[200001],c[210000001],ans,cnt;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>b[i]>>a[i];
		for(ll j=cnt+1;j<=b[i]+cnt+1;j++)
			c[j]=a[i]-'a';
		cnt+=b[i];
	}
	for(ll i=1;i<=cnt/2;i++){
		if(c[i]!=c[cnt-i+1])
			ans++;
	}
	cout<<ans;
	return 0;
}

