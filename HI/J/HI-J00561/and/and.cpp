#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[1000],x[1000];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=m;j++){
			a[i]=a[i]&a[j];
		}
		x[i]==a[i];
		cout<<x[i]<<endl;
	}
	sort(x,x+n);
	cout<<x[n-1];
	return 0;
}
