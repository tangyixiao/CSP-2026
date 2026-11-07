#include<stdio.h>
#include<cctype>
using namespace std;
int read(){
	char c=getchar();int x=0;
	for(;!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar()) x=x*10+c-'0';
	return x;
}
int n;
long long ans,len;
char c[(int)1e9+5];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	for(int i=0;i<n;i++){
		int a=read();
		len+=a;
		char x=getchar();
		while(a--) c[len-a-1]=x;
	}
	for(int i=0;i<len/2;i++){
		if(c[i]!=c[len-i-1]) ans++;
	}
	printf("%lld",ans);
	return 0;
}
