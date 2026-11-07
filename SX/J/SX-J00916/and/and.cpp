#include<bits/stdc++.h>
using namespace std;
long long n,m,c=0;
int a[100000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(long long i=1;i<=n;i++){
		long long b=a[i]&a[i-1];
		if(b>=c){
			c=b;
		}
	}
	cout<<c;
	return 0;
}