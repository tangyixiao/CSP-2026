#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],c[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int l=1;l<=n;l++){
		for(int i=1;i<=n;i++)b[i]=0;
		for(int i=l;i<=n;i++){
		    for(int j=1;j<=n;j++){
			    if(a[i]==b[j]){
				    for(int k=j+1;k<=n;k++){
					    b[k]=0;
				    }
				    b[j]=a[i];
			    	break;
			    }
			    if(b[j]==0){
			    	b[j]=a[i];
				    break;
		 	    }
		    }
	    }
	    for(int i=1;i<=n;i++){
	    	if(b[i]==0)break;
	    	c[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<' ';
}
