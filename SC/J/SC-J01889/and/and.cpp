#include<bits/stdc++.h>
using namespace std;
long long a[200055],pre[200055];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<n;i++){
		cin>>a[i];
		
	}
	sort(a+1,a+n+1);
	int x=pow(2,31)-1;
	for(int i=0;i<m;i++){
		if(((x^a[n-m])==x)||((x^a[n-m])==a[n-m])||((x&a[n-m])==0)||(a[n-m]<x&&(a[n-m])&x)==a[n-m])continue;
		x=x&a[n-m];
	}
	cout<<x;
	return 0;
}