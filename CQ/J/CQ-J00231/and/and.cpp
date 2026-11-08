#include<bits/stdc++.h>
using namespace std;
long long n,m,maxn=0; 
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(maxn<a[i]) maxn=a[i];
	}
	cout<<maxn;
	return 0;
}

