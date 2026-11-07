#include <bits/stdc++.h>
using namespace std;
const long long MAXN=10000010;
long long n,a[MAXN];
char s[MAXN];
char c[MAXN];
long long tmp=0,ans;
long long pinjie(long long x,char y){
	for(long long i=0+tmp;i<x+tmp;i++){
		c[i]=y;
	}tmp+=x;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>s[i];
		long long a1=a[i];
		char s1=s[i];
		pinjie(a1,s1);
	}
	long long l=0;long long r=tmp-1;
	while(l<r){
		if(c[l]!=c[r]){
			c[r]=c[l];
			ans++;
			l++;r--;
		}else{
			l++;r--;
			continue;
		}
	}
	cout<<ans;
	return 0;
}
