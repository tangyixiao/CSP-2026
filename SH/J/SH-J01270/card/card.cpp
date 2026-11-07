#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int a[500010]={},n,m;
    cin>>n>>m;
    vector<int>c(m+10);
    for(int i=1;i<=n;i++)cin>>a[i];
    
    for(int i=1;i<=n;i++){
    	int z=0;
    	vector<int>d(m+10);
    	for(int j=i;j<=n;j++){
    		z++;
    		int x=a[j];
    		int f=1;
    		for(int k=1;k<z;k++){
    			if(d[k]==x){
    				f=0;
    				z=k;
				}
			}
			if(f){
				d[z]=x;
			} 
		}
		for(int j=1;j<=z;j++){
			c[d[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<' ';
    fclose(stdin);
    fclose(stdout);
    return 0;
}
