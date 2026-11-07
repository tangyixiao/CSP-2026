#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long  n;
	scanf("%lld",&n);
	long long l[n]={0};
	char c[n];
	long long p=0;
	char a;
	for(int i=0;i<n;i++){
		scanf("%lld",&l[i]);
		scanf("%c",&a);
		p+=l[i];
		if(i!=0)l[i]=l[i]+l[i-1];
		scanf("%c",&c[i]);
	}
	long long cnt=0;
	for(int i=0;i<p/2;i++){
		int x=0;
		while(i>l[x]){
			x++;
		}
		int y=n-1;
		while(p-i<=l[y-1]){
			y--;
		}
		if(c[x]!=c[y])cnt++;
	}
	printf("%lld",cnt);
	return 0;
}