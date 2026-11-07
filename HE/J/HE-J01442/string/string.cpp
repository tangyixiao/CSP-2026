#include<bits/stdc++.h>
using namespace std;
int n,a[200001],x,m=1,w,j;
char c[200001];
char s[10000000001];
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		for(j=1;j<=a[i];j++){
			w=c[i];
			s[m]=w;
			m++;
		}
	}
	m--;
	for(int i=1;i<=m;i++){
		j=m-i+1;
		if(s[i]!=s[j]){
			s[j]=s[i];
			x++;
		}
	}
	printf("%d",x);
	return 0;
}
