#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
    int n,m,a[200009],b[200009]={0},c[200009]={0},f=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int l=0;
    for(int i=n;i>=l;i--){
    	for(int j=i-1;j<=n;j++){
    		for(int k=1;k<=j;k++){
    	    if(a[i]=a[j]){
				l=i;
				c[i]=a[i];
			}
		}
		f=c[i];
		if(j==n){
		    b[f]++;
		}
		}
		
	}

for(int i=2;i<=n;i++){
	cout<<b[i]<<" ";
}
	return 0;
} 
