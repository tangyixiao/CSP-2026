#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	int andd=2147483647;
	for(int i=0;i<m;i++)andd=andd and a[i];
	cout<<andd<<endl;
	return 0;
}
