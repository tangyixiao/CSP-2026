#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
#define forr(i,a,b) for(int i=(a);i<=(b);i++)
const int N=2e5+5,M=1e8;
int n,a[N];
char c[M],s[M];
long long len=0,ans=0;
int cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf(" %d",&a[i]);
		scanf(" %c",&c[i]);
		len+=a[i];
		for(int j=1;j<=a[i];j++)s[++cnt]=c[i];
	}
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len-i])ans++; 
	}
	cout<<ans<<endl;
//	for(int i=1;i<=len;i++)cout<<s[i];
//	forr(i,1,n)cout<<a[i]<<c[i];
//	cout<<len;
	return 0;
} 