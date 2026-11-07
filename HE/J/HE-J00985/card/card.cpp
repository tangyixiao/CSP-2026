#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		int l=t-1;
		for(int i=t;i<=n;i++){
			for(int j=t;j<l;j++){
				if(a[i]==b[j]){
					l=j-1;
					break;
				}
		    }
			b[++l]=a[i];
	    }for(int i=t;i<=l;i++){
	        	ans[b[i]]++;
		    }
    }for(int i=1;i<=m;i++){
	    	cout<<ans[i]<<' ';
	    }
	return 0;
} 
