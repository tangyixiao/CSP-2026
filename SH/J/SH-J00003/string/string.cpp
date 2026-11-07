#include<bits/stdc++.h>
using namespace std;
long long n,ans;
char s[9999999999];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a,len=strlen(s);
		char b;
		cin>>a>>b;
		for(long long j=len;j<len+a;j++) s[j]=b;
	}
	int len=strlen(s);
	for(long long i=0,j=len-1;i<len/2,j>len/2;i++,j--) if(s[i]!=s[j]) ans++;
	cout<<ans;
	return 0;
}
