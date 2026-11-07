#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int i;
	for(i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	} 
	int c[500005];
	for(int q=n;q>=1;q--){
		for(i=1;i<=n;i++){
	    	b[i]=a[i];
    	}
		for(int j=q;j>=1;j--){
			if(a[q]==a[j]){
			    for(int p=j;p>=q;p--){
			    	b[p]=0;
				}	
			}
		}for(int s=1;s<=m;s++){
		for(int j=1;j<=n;j++){
			if(b[j]==s){
				c[s]++;
			} 
		}	
	}
	}
	for(int s=1;s<=m;s++){
		cout<<c[s]<<" ";
	}
	return 0;
}