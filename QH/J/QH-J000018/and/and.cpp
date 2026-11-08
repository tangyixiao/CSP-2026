#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
 freopen("and.in",r,"stdin");
 freopen("and.out",w,"stdout");
 int n,m;
 int a[n]
 for(int i=0,i<=n;i++){
 	cin >> a[i];
 }
 int cc=0;
 for(int i=0,i<=m;i++){
 	if(cc<a[i]&&a[i+1]){
 		cc=a[i]&&a[i+1];
	 }
 }
cout << cc;
return 0;
 }
