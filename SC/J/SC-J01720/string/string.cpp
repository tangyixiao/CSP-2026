#include<iostream>
#include<cstdio>
using namespace std;
char c[1000000005]; 
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	int p=1;
	for(int i=1;i<=n;i++){
		long long a;
	 	char b;
	 	cin>>a>>b;
	 	for(int i=p;i<=p+a;i++)c[i]=b;
	 	p+=a;
	}
	long long ans=0;
	for(long long i=1;i<=p/2;i++)if(c[i]!=c[p+1-i])ans++;
	printf("%lld",ans);
	return 0;
} 