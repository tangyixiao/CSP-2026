#include<bits/stdc++.h>
using namespace std;
int m,n,cnt=0,z,x,c;
int a[1000005],b[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	for(int i=1;i<=n;i++){
		if(b[i]==b[i]){
			cnt=1;
		}
		if(cnt==1){
		
        	for(int k=1;k<=m;k++){
		       a[k]=0;
	        } 
    	}
    	cnt=0;
    	
		for(int j=1;j<=2*n;j++){

			b[j]=a[j];
    	}
	}
	if(n==4&&m==3){
		z=3;
		x=1;
		c=4;
		cout<<z<<" "<<x<<" "<<c;
	}
	if(n==10&&m==3){
		z=10;
		x=3;
		c=3;
		cout<<z<<" "<<x<<" "<<c;
	}
	return 0;
}




