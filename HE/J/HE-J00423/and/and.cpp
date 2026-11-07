#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010];
long long cmp[200010];
long long ox=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=i;j<=n;j++){
			cmp[i]=a[i]&a[i+1];
			cout<<cmp[i];
		}
	}
	
	return 0;
}
