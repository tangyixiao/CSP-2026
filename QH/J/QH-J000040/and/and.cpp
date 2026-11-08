#include<bits/stdc++.h>
using namespace std;
int b[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,sum=0,a;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		b[i]=a;
	} 
	cout<<b[n];
	return 0;
}
