#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	int n,m;
	cin>>n>>m;
	int a[n];
	int cup=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cup=max(cup,a[i]&a[i-1]);
	}	
	cout<<cup<<endl;
	return 0;
}
