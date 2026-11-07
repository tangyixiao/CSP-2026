#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[n+2];
	char c[n+2];
	for(long long i=1;i<=n;i++) cin>>a[i]>>c[i];
	long long len=0,t=0;
	for(long long i=1;i<=n;i++) len+=a[i];
    char s[len+2];
    for(long long i=1;i<=n;i++){
    	
	}
	for(long long i=1;i<=n;i++)
	    for(long long j=1;j<=a[i];j++){
	    	s[t]=c[i];
	    	t++;
		}
	long long ce=0;
	for(long long i=0;i<=len/2-1;i++)
		if(s[i]!=s[len-1-i]){
			ce++;
		}
	cout<<ce;
	return 0;
}
