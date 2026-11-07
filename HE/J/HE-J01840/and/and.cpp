#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],sum;
int main(){
	freopen("number.in","r","and.in");
	freopen("number.out","w","and.out");
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	sum=a[n]&a[n-1];
	for(int j=1;j<=m-2;j++){
		sum=a[n-1-j]&sum;
	}
	cout<<sum;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
