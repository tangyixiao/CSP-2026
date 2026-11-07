#include <bits/stdc++.h>
 using namespace std;
 bool c(int a,int b){
 	return a>b;
 }
 int a[10000003];
 int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,c);
	int b=1000003;
	for(int i=1;i<=q;i++){
		b=min(b,a[i]);
	}
	cout<<b;
	return 0;
 }