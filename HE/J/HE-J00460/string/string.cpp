#include<bits/stdc++.h>
using namespace std;
long long n,lsd[200010],da,q,p;
char lsc[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	lsd[0]=0;
	for(long long i=1;i<=n;i++){
		scanf("%lld %c",&lsd[i],&lsc[i]);
		lsd[i]=lsd[i]+lsd[i-1];
	}
	q=1;
	p=n;
	for(long long i=1,j=lsd[n];i<j;i++,j--){
		if(lsd[q]<i){
			q++;
		}
		if(lsd[p-1]>=j){
			p--;
		}
		if(lsc[q]!=lsc[p]){
			da++;
		}
	}
	printf("%lld",da);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

