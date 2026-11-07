#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],t[M];
bool FA=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]),t[a[i]]++;
		if(a[i]<a[i-1]) FA=0;
	}
	if(m==1){
		printf("%d",n);
		fclose(stdin); fclose(stdout);
		return 0;
	}
	if(FA){
		long long s=0;
		for(int i=1;i<=m;++i){
			s+=t[i];
			printf("%lld ",s);
		}
	}else{
		for(int i=1;i<=m;++i){
			printf("%d ",t[i]);
		}
	}
	
	fclose(stdin); fclose(stdout);
	return 0;
}