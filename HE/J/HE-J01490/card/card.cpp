#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	int a[500100],x[500100],y[300100];
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		bool b[300100];
		int c[500100];
		int p=1;
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=1){
				x[a[j]]=j;
				b[a[j]]=1;
				c[p]=a[j];
				p++;
			}else if(b[a[j]]==1){
				p=x[a[j]]+1;
	            for(int k=x[a[j]];k<j;k++){
	            	b[a[j]]=0;
				}b[a[j]]=1;
			}
		}for(int j=1;j<p;j++){
			y[c[j]]=i;
		}
	}for(int i=1;i<=m;i++){
		cout<<y[i]<<" ";
	}
    return 0;
}
