#include<bits/stdc++.h>
using namespace std;
long long int a[200001],tp[200001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,top=0,st=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n; 
	} 
	return 0;
} 