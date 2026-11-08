#include <bits/stdc++.h>
using namespace std;
const int N=1e5*2+2;
long long a[N]; 
bool cmp(int a,int b){
	return a>b;
}
signed main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+1+n,cmp);
	int sum=a[1];
	for(long long i=2;i<=m;i++){
		sum=(sum)&(a[i]);
	}
	cout<<sum;
	return 0;
}
