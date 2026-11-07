#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ls[200010],da,l;
void qwe(long long s,long long w){
	if(s==0){
		l=ls[m];
		for(int i=1;i<=m;i++){
			l=l&ls[i];
		}
		da=max(da,l);
	}else{
		for(int i=w;i<=n;i++){
			ls[s]=a[i];
			qwe(s-1,i+1);
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		ls[m]=a[i];
		qwe(m-1,i+1);
	}
	printf("%lld",da);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

