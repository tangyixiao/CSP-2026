#include<bits/stdc++.h>
using namespace std;
int n,m,t;
long long a[10];
long long g[10];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++)g[j]=a[j];
	}
	return 0;
}
