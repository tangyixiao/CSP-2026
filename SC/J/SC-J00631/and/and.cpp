#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long x=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	x=a[1];
	for(int i=2;i<=m;i++){
		x&=a[i];
	}
	cout<<x;
	return 0;
}