#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	scanf("%lld%lld",&n,&m);
	long long a[n];
	long long anda[n]={-1};
	long long maxa=-1;
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<n;i++){
		anda[i]=max(a[i]&a[i-1],anda[i]);
		maxa=max(maxa,anda[i]);
	}
	cout<<maxa<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}