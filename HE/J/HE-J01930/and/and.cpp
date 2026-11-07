#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdont);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int b[m+2];
	if(m == 1){
		cout<<a[n];
	}
	b[1] = a[n];
	for(int i = 2;i < m;i++){
		b[i] = a[n-i+1];
	}
	return 0;
}
