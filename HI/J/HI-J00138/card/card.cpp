#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int t =0;

	for(int i=1;i<=n;i++){
		cin>>a[i];

	}
	for(int i =1;i<=n;i++){
		t =a[i];
		b[t]++;
	}
	for(int i =1;i<=m;i++){
	cout<<b[i]<<" ";
	}
	return 0;
}
