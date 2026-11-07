#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,b[100001];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	sort(b,b+n);
	for(int i=n-2;i>=n-m;i--){
		b[n-1]&=b[i];
	}
	printf("%d",b[n-1]);
	return 0;
}
