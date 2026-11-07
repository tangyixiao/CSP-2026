#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],t[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		t[k]++;
		if(t[k]==0){
			a[i]=k;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<i<<" ";
	}
	return 0;
}