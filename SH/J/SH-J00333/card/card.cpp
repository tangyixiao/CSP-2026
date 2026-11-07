#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010],cnt[500010];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	int n,m,f1=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		if(i!=1){
			if(a[i-1]>a[i]){
				f1=0;
			}
		}
	}
	if(f1){
	    for(int i=1;i<=n;i++){
	    	for(int j=1;j<=n;j++){
	    		if(a[j]==a[j+1]){
	    			a[j]=0;
	    			a[j+1]=0;
	    			j++;
				}
			}
		}
		for(int i=1;i<=n;i++){
	    	cnt[a[i]]++;
		}
	    for(int i=1;i<=n;i++){
		    a[i]=b[i];
	    }	
	}else{
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
		    for(int j=k;j<=i;j++){
			    int f=0;
		        if(a[j]==a[i]){
		    	    f=1;
			    }
			    if(f){
			    	a[j]=0;
			    }
	        }
	    }
	    for(int i=1;i<=n;i++){
	    	cnt[a[i]]++;
		}
	    for(int i=1;i<=n;i++){
		    a[i]=b[i];
	    }
	}	
	}
    for(int i=1;i<=n;i++){
	    cout<<cnt[i];
	}
	   
	
	return 0;
} 
