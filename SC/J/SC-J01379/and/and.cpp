#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long a[500500];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int x=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x=max(x,a[i]);
	}
	cout<<x;
	return 0;
}