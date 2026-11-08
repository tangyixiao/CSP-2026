#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","m",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+2]={};
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int c[m+2]={};
	for(int i=1; i<=n; i++){
		int bc=1,b[n+2]={},d[m+2]={};
		for(int v=1+i-1; v<=n; v++){
			int sum=a[v];
			if(d[sum]==1){
				int flag=1;
				bc--;
				while(flag==1){ 
					if(b[bc]==d[sum]) break;
					d[b[bc]]=0;
					b[bc]=0;
					bc--;
				}
				bc++;
			}else{
				b[bc]=a[v];
				d[b[bc]]=1;
				bc++;
			}
		}
		for(int v=1; v<=n; v++){
			if(b[v]!=0) c[b[v]]++;
		}	
	}
	for(int i=1; i<=m; i++){
		if(c[i]!=0) cout<<c[i]<<" ";
	}
	return 0;
}
