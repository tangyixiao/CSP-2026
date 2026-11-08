#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],num[300005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m,r,j=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	r=0;
    	for(int j=i;j<=n;j++){
    		for(int q=1;q<=r;q++){
    			if(b[q]==a[j]){
    				r=q;
    				j=1;
    				break;
				}
			}
			if(j==1){
				j=0;
				continue;
			}
			b[r]=a[j];
		}
	    for(int j=1;j<=r;j++){
	    	num[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i];
	}
    return 0;
}
