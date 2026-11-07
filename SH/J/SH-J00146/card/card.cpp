#include<bits/stdc++.h>
using namespace std;
int a[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int pai[n];
	for(int i=0;i<n;i++){
		cin>>pai[i];
		a[pai[i]]++;
	}
	for(int i=2;i<=m+1;i++){
		cout<<i;
		if(i<=m)cout<<" ";
	}
	return 0;
}
