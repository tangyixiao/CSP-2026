#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("and.in","r",std.in);
	//freopen("and.out","w",std.out);
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxn=0; 
	for(int i=0;i<n-1;i++){
		maxn=max(maxn,a[i]&a[i+1]);
	}
	cout<<maxn;
} 
