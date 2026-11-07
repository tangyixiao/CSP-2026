#include<bits/stdc++.h>
using namespace std;
int n,m,a[50009],b[50009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	b[a[n]]=m;
	cout<<m;
	return 0;
}
