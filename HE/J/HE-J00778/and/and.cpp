#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005];
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    if(m==1){
	    int maxx=-1;
    	for(int i=1;i<=n;i++){
    		cin>>a[i];
    		maxx=max(a[i],maxx);
		}
		cout<<maxx;
	}
	return 0;
}
