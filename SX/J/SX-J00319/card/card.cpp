#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	int n,m,a[500000],x[300000];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=m;j++){
			if(a[i]=j){
				x[j]++;
			}
		}
	}
	return 0;
}