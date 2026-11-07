#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen ("and.in","r",stdin);
    freopen ("and.out","w",stdout);
    int m,n,MAX=-1;
    cin>>n>>m;
    int a[n+1]={};
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(m==1){
		cout<<0;
	}
	if (m==2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				MAX=max(MAX,(a[i]&a[j]));
			}
		}
		cout<<MAX;
	}
}
