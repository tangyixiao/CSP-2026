#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a[1000009];
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	if(m==n){
		for(int i=0;i<m;i++){
			printf("1 ");
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		scanf("%lld",a[i]);
	}
	return 0;
}
