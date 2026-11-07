#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>m>>n;
	int x[100];
	int y[100];
	int b[100];
	for(int i=0;i<m;i++){
		cin>>x[i];
	}
	for(int k=0;k<m;k++){
		for(int i=0;i<m;i++){
		    y[i]=x[i];
		    for(int j=0;j<=i;j++){
		        if(y[i]==y[j]){
		    	    for(int l=j;l<i;l++){
                        y[l]=0;
	                }
				    y[j]=y[i];  
			    }
	        }
	    }
		for(int i=0;i<m;i++){
		    b[y[i]]++;
	    }  
	}
	for(int i=1;i<n;i++){
		if(b[i]!=0){
			cout<<b[i]<<" ";
		}
	}
	return 0;
}
