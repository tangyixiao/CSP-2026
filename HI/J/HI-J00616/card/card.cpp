#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010]={};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}
	return 0;
}
