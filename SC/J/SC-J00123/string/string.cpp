#include<bits/stdc++.h>
using namespace std;
long long n,num,m;
string S;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	char a[n+6];
	int x[n+6];
	for(int i=1;i<=n;i++){
		scanf("%d %c",&x[i],&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i+1]!=a[n-i]||x[i+1]!=x[n-i]){
			if(x[i+1]-m>=x[n-i]){
				num+=x[i+1]+m;
				m=x[i+1]-x[n-i]-m;
				
			}
			if(x[n-i]-m>=x[i+1]){
				a[i+1]=a[n-i];
				num+=x[n-i]+m;
				m=x[n-i]-x[i+1]-m;
				
			}
		}
	}
	printf("%lld",num);
	return 0;
}