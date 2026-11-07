#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int a[500005]={0};
int re[500005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		re[a[i]]==i;
	}
	for(int i=0;i<m;i++){
		cout<<re[i]<<" ";
	}
	return 0;
}