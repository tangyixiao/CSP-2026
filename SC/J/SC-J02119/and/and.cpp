#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn[100000005],cnt=0; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>maxn[i];
	}
	sort(maxn,maxn+n);
	cout<<maxn[n-m];
	return 0;
}