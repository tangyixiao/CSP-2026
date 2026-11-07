#include <bits/stdc++.h>
using namespace std;
int n,m;
int b; 
int max,max1;
int ejz(int x){
	int y,z;
	while(x>=2){
	y=x%2;
	z=x*10+y;
    }
    return z;
}
int swbl(int x,int y){
	int r;
	if(x==y){
		return x;
	}else{
	    if(x>y){
		    int z=0;
	    	while(x>=10){
	    		int x1,y1;
	    		x1=ejz(x)%10;
	    		y1=ejz(y)%10;
	    		if(x1>y1){
	    			r=y1;
				}else{
					r=x1;
				}
				z=z*10+y1;
			}
			return z;
		}else{
			int z=0;
	    	while(y>=10){
	    		int x1,y1;
	    		x1=ejz(x)%10;
	    		y1=ejz(y)%10;
	    		if(x1>y1){
	    			r=y1;
				}else{
					r=x1;
				}
				z=z*10+y1;
			}
			return z;
		}	
	}
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[n],s[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i]=a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	if(m==1){
		cout<<max;
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b=swbl(s[i],s[j]);
			if(max1<b){
				max1=b;
			}
		}
	}
	int q=0,p,max2;
	while(max1>1){
		 p=max1%10;
		 for(int i=0;i<=q;i++){
		 	max2=max2*2;
		 }
		 max2=max2+p;
	}
	cout<<max2;
	return 0;
}