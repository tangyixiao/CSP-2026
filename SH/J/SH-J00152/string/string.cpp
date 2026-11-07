#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],l,ans,g;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	for(long long i=1;i<n;i++){
		g=__gcd(a[i],a[i+1]);
	}
	for(long long i=1;i<=n;i++){
		a[i]/=g;
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	l=s.size();
	for(long long i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]){
			ans++;
			s[l-1-i]=s[i];
		}
	}
	cout<<ans*g;
	return 0;
}
