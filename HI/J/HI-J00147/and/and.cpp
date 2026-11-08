#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r","stdin");
    freopen("and.out","w","stdout");
    int a[200003]={0},b[200001]={0},z=0;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	for(int j=1;j<=n;j++){
    	if(z<a[j]){
    		int s;
    		s=z;
    		z=a[i];
    		a[i]=s;
		}
	}
	}
    int l=0;
    for(int i=1;i<=n;i++){
    	int z=0;
    	for(int j=n;j>=1;j--){
    		for(int k=1;k<=m;k++){
    			z=a[j] & a[j+1];
    			
			}
    		if(z>l){
    			l=z;
			}
		}
	}
	cout<<l;
	return 0;
} 
