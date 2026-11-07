#include <bits/stdc++.h>
using namespace std;
long long s[0x3f3f3f],r[0x3f3f3f];
long long n,m,ss=1,ans=0,b;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;++i){
		cin>>b>>a;
		for(long long j=1;j<=b;++j,++ss){
			s[ss]=a-'a';
			r[ss]=a-'a';
		}
	}
	reverse(r+1,r+ss);
	for(long long i=1;i<ss;++i){
		if(s[i]!=r[i]){
			ans++;
		}
	}
	cout<<ans/2<<endl;
	return 0;
}
