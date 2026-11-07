#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],l,r,sum=0;
char c[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(long long j=0;j<a[i];j++)
			s+=c[i];
		r+=a[i];
	}
	l=0;
	r-=1;
	while(l<=r){
		if(s[l]!=s[r]) sum++;
		l++;r--;
	}
	printf("%lld",sum);
	return 0;
}