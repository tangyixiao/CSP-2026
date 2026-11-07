#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
const int N=9999999999+1;
char s[N];
int n,m=0,minx=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++) s[++m]=c;
	}
	for(int i=1;i<=m/2;i++) if(s[m-i+1]!=s[i]) minx++;
	cout<<minx;
	return 0;
}
