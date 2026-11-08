#include<bits/stdc++.h>
using namespace std;
long long n,x[2100000];char a[2100000],b;
int main(){
	freopen("string.in","r",stdin);freopen("string.out","W",stdout);
	scanf("%lld",&n);
	if(n==1)printf("0");
	if(n==2){
		scanf("%lld%c",&x[1],&a[1]);
		scanf("%lld%c",&x[2],&a[2]);
		if(a[1]!=a[2]){
			printf("%lld",min(x[1],x[2]));
		}
		else{
			printf("0");
		}
	}
	else{
		int top=0;
		for(int i=1;i<=n;i++){
			scanf("%lld%c",&x[i],&b);
		
			for(int j=1;j<=x[i];j++){
				a[++top]=b;
			}
		}
	
	}
	return 0;
}
