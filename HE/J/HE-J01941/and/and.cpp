#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int x=a[1];
	for(int i=2;i<=m;i++){
		x&=a[i];
	}
	cout<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
