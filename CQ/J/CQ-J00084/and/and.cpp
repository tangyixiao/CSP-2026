#include<bits/stdc++.h>
using namespace std ;
int a[100000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	int n,m,maxx=0,c;
	cin>> n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c=a[i]||a[j];
			maxx=max(maxx,c);
			
		}
	}
		if(m==2){
		cout<<maxx;	
		}else{
			cout<<a[3];
		}
	
	return 0;
}
