#include <bits/stdc++.h>
using namespace std;
int const N=1e5+100;
int n;
typedef long long LL;
char a[N],b[N],c[N],dp[N];
long long  check(long long len,char n){
	long long l=1,r=len;
	while(l<=r){
		long long mid=(l+r)/2;
		if(dp[mid]>=n)r=mid-1;
		else l=mid+1;
	}
	return l;
}
long long len1;char s;
string s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	
	for(LL i=1;i<=n;i++){
		cin>>len1>>s;
		for(long long  j=1;j<=len1;j++){
			s1+=s;
		}
	}
	len1=(long long )s1.size();
	for(long long i=0;i<len1/2;i++){
		c[s1[i]-'a']=i;
	}
	reverse(s1.begin()+len1/2,s1.end());
	for(LL i=len1/2;i<len1;i++){
		b[i]=c[s1[i]-'a'];
	}
	long long len=0;
	for(LL i=1;i<=len1;i++){
		if(b[i]>dp[len]){
			len++;
			dp[len]=b[i];
		}else{
			long long t=check(len,b[i]);
			dp[t]=b[i];
		}
	}
	printf("%lld",n-len-1);
	return 0;

}