#include<bits/stdc++.h>
using namespace std;
int n,m,a[105],b[105];
int main(){
	string sum="";
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		b[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				for(int l=j;l<=n;l++){
					sum+=a[l];
					for(int t=1;t<=m;t++){
				        for(int y=1;y<=n;y++){
					        if(sum[y]==t){
						        b[y]++;
						    }
				        }
				    }
			    }
		    }
	    }
		if(sum==""){
			for(int l=1;l<=n;l++){
				sum+=a[l];
			}
			for(int l=1;l<=m;l++){
				for(int j=1;j<=n;j++){
					if(sum[j]==l){
						b[l]++;
					}
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0; 
}
