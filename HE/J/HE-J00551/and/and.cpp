#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005],c[100005],cnt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[m];
	return 0;
} 
