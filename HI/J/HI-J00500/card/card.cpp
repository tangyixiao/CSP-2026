#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
int n,m;
int a[20005];
cin>>n>>m;
   for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	if(m==2){
		cout<<a[0]<<a[n-1];
		return 0;
	}else{
		cout<<a[0];
	}
   return 0;
}
