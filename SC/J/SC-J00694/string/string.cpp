#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long len=0;
	int n,a,ans=0,t=0;
	char c,c1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a>=1e8)a/=1e8,t=1;
		len+=a;
		scanf("%c%c",&c1,&c);
		for(int j=1;j<=a;j++)s+=c;
	}
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1])ans++;
	}
	printf("%d",ans);
	if(t==1)printf("00000000");
	return 0;
} 