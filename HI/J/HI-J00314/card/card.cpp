#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[600005];
int b[400005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==n){
			b[a[i]]=n;
		}
	}
	cout<<n;
	return 0;
}
