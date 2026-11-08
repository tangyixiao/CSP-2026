#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1&&m==1){
		cout<<a[0];
	}
	return 0;
}
