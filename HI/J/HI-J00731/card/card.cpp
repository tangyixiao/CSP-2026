#include <bits/stdc++.h>
using namespace std;
int a[300005] = {};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1] && i>0){
			cout<<i<<" ";
		}
	}
	cout<<n;
	return 0;
} 
