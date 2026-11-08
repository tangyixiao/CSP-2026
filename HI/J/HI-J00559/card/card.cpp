#include<bits/stdc++.h>
using namespace std;
long long a[500005],b[300005],d[500005],c[500005];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n;j++){
			d[j]=c[j];
		}
		
		for(int j=i;j<=n;j++){
			
				for(int o=1;o<j;o++){
			        if(d[j]==a[o]){
			        	for(int p=o;p<=n;p++){
			               a[p]=0;
		                }
		                break;
					}
		        }
		    
			a[j]=d[j];
		}
		for(int j=1;j<=n;j++){
		    b[a[j]]++;
		    a[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
	    cout<<b[i]<<" ";	
	}
	return 0;
}
