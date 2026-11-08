#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("card.in","r",stdin);
	//freopen(card.out","w",stdout);
	int n,m,a[10086],b[10086],c;
	cin>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		if(b[i]!=b[i+1]){
			c=b[i+1];
			b[i+1]=b[i];
			b[i]=c;
		}else{
			b[i]-
		}
	}
	return 0;
}
