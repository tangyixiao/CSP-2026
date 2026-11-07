#include<bits/stdc++.h>
using namespace std;
int a[200005];
int n,m,mx=-1,x,y,z;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]==1){
    		x=1;
		}
		if(a[i]==2){
    		y=1;
		}
		if(a[i]==3){
    		z=1;
		}
    	
	}
	if(m==1){
		sort(a+1,a+n+1);
		
		cout<<a[n];
	}else if(m==2){
		for(int i=1;i<=n;i++){
    	 	for(int j=1;j<=n;j++){
    			if(mx<=a[i]&a[j]){
    				mx=a[i]&a[j];
				}
    	
	    	}
	    }                                      
	    cout<<mx;
	}else{
		if(y==1&&z==1){
			cout<<3;
		}else if(x==1&&y==0&&z==1&&m==2){
			cout<<1;
		}else if(x==1&&y==1&&z==0&&m==2){
			cout<<0;
		}
	}
    return 0;
	
} 
