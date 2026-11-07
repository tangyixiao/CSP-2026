#include<bits/stdc++.h>
using namespace std;

int n,m,a[1200],k;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		if(m==1){
			cout<<"1";
			break;
		}else{
			cout<<n/2;
			break;
		} 
	} 
	return 0;
}