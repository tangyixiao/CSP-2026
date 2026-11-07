#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n,m;
LL a[100000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(LL i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n%2==0&&m%2==0){
		cout<<n-m;
	} 
	else{
		cout<<a[n-1];
	}
	return 0;
} 