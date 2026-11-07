#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,a[20000];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(m==1){
			cout<<"1";
		}else{
			cout<<n/m;
		}
	}
    return 0;
}