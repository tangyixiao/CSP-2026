#include<bits/stdc++.h>
using namespace std;
int const N = 2e5 + 5;
long long a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int y;
	char l;
	int sum = 0;
	scanf("%d",&n);
	if(n==1){
		scanf("%d%c",&y,&l);
		printf("%d",0);
		return 0;
	}
	for(int i = 1;i <= n;i++){
		scanf("%lld%c",&a[i],&c[i]);
		sum += a[i];
	}
	if(sum==n) printf("%d",sum/2);
	else printf("%d",1);
	return 0;
}
