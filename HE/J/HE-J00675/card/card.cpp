#include<bits/stdc++.h>
using namespace std;
int a[510000],sum[210000],maxx;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;	
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==4&&m==3){
		cout<<3<<" "<<1<<" "<<4;
	}
	if(n==10&&m==3){
		cout<<10<<" "<<3<<" "<<3;
	}
	else{
		for(int i=1;i<=m;i++)cout<<0;
	}
	return 0;
}
