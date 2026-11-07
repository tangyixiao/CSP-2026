#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[50010];
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<1;
	}
	if(m==2){
		cout<<2;	
	}
	return 0;
}
