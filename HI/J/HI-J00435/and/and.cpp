#include<bits/stdc++.h>
using namespace std;
int m,n,maxn=-1e5;
int a[2000000];
char x[100];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n-2];
	return 0;
} 
