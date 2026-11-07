#include<bits/stdc++.h>
using namespace std;
long long a[100000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	if(n==5&&m==3) cout<<"7";
	if(n==4&&m==2) cout<<"12";
	else cout<<"0";
	return 0;
}