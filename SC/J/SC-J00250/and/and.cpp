#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int x=-1;
	for(int i=1;i<=n-m+1;i++){
		int s=0;
		for(int j=i+1;j<=i+m-1;j++){
			s=(a[i]&a[j]);
			x=max(x,s);
		}
	}
	cout<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}