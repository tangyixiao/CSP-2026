#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],c[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			c[j]=a[i]^a[i+1];
		}
	}
	sort(c+1,c+1+m);
	cout<<c[m];
	return 0;
}
