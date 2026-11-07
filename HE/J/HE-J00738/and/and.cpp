#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,x=0;
	cin>>n>>m;
	long long a[100005];
	for(int i=0;i<n;i++){
		cin>>a[i];
		x=max(x,a[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=1;j<=n;j++){
			x=max(x&a[m],x&a[j]);	
		}
	}
	cout<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
