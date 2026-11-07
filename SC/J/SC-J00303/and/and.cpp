#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,a[N],v,l;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++){
		l=a[i];
		for(int j=1;j<=m;j++){
			l=l&a[j+i];
		}
		v=max(v,l);
	}
	cout<<v;
}