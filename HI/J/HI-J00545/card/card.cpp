#include<bits/stdc++.h>
using namespace std;
long long n,m,a[50005],i=1,b[50005][50005],c[50005],bbb;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int j=1;j<=n;j++){
		cin>>a[j];
	}
	for(;i<=n;i++){
		bbb=n;
		for(long long j=i;j<=n;j++){
		    if(b[i][a[j]]==0){
			b[i][a[j]]=j;
		    }
		    else{
		    	n-=j-b[i][a[j]]-1;
		    	j=b[i][a[j]];
		    	b[i][a[j]]=0;
			}
	    }n=bbb;
	    for(long long aaa=1;aaa<=m;aaa++){
	    	if(b[aaa]!=0)c[aaa]++;
		}
	}
	for(long long aaa=1;aaa<=m;aaa++){
	    	cout<<c[aaa]<<" ";
		}
	return 0;
}
