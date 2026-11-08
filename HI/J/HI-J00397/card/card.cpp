#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m,flag=0;
	cin>>n>>m;
	 for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 	if(a[i]<a[i-1]) flag=1;
	 }
	 if(flag==0){
	 	for(int i=m;i<=n;i++) cout<<a[i];
	 }
    return 0;
}
