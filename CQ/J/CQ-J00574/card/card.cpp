#include<bits/stdc++.h>
//#define int long long
using namespace std;
int n,m,l;
int a[500001];
int b[300001];
int c[500001];
long long d[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)	scanf("%d",&a[i]);
	for(int k=1;k<=n;k++){
		l=0;
		for(int i=1;i<=m;i++)	b[i]=0;
		for(int i=k;i<=n;i++){
			if(b[a[i]]!=0){
				for(int j=b[a[i]]+1;j<=l;j++)	b[c[j]]=0;
				l=b[a[i]];
				c[l]=a[i];
				b[a[i]]=l;
			}else	c[++l]=a[i],b[a[i]]=l;
		}
		for(int i=1;i<=m;i++)
			if(b[i])	d[i]++;
	}
	for(int i=1;i<=m;i++)	printf("%lld ",d[i]);
	return 0;
}


