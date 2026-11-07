#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,a[500050],b[500050],c[500050],d[500050];
int main(){
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    }
    for(int i=1;i<=n;i++){
    	memset(b,0,sizeof(b));
    	memset(d,0,sizeof(d));
    	for(int j=i;j<=n;j++){
    		b[a[j]]++;
			if(b[a[j]]==1){
    		  d[a[j]]=j;
		    }
    	    else if(b[a[j]]==2){
    	    	for(int k=d[a[j]];k<=j;k++)
    	    	if(b[k]>0)
				b[k]--;
			}
		}
		for(int j=1;j<=m;j++){
			if(a[n]==j)
		    c[j]=n;
		    else if(b[j]==1)
		    c[j]++;
		}
	}
    for(int i=1;i<=m;i++){
    	cout<<c[i]<<" ";
	}
    return 0;
} 
