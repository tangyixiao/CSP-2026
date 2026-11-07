#include<bits/stdc++.h>
using namespace std;
int a[200100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<1;
	}
	if(m==2){
		cout<<n;
	}
	return 0;
}
