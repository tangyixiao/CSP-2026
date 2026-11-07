#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout);
	unsigned long long n;
	cin>>n;
	unsigned long long a[n];
	char b[n];
	unsigned long long s=0;
	for(unsigned long long i=0;i<n;i++){
        cin>>a[i]>>b[i];
        s+=a[i];
	}
	char m[s];
	unsigned long long anss=0;
	for(unsigned long long i=0;i<n;i++){
        for(unsigned long long j=0;j<a[i];j++){
            m[anss]=b[i];
            anss++;
        }
	}
	unsigned long long ans=0;
        for(unsigned long long i=0;i<=s/2;i++){
            if(m[i]!=m[s-1-i])ans++;
        }
        cout<<ans;
	return 0;
}
