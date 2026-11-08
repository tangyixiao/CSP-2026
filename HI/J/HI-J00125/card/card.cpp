#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool p;
int main(){

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	a[0]=a[1];
	p=true;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1]){
			p=false;
		}
	}
	if(p){
		for(int i=1;i<=a[0]-1;i++){
			cout<<"0"<<" ";
		}
		cout<<n;
		for(int i=a[0]+1;i<=m;i++){
			cout<<" "<<"0";
		}
	}else{
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
	}

	return 0;
}

