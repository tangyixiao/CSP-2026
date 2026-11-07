#include<bits/stdc++.h>
using namespace std;
int a[200010],n,m,maxx=-1e5;
int main(){
	freopen("and".in,'r',std.in);
	freopen("and".out,'w',std.out);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a+0,a+n);
	cout<<a[n-m];
}