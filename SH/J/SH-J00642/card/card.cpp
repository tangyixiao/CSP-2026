#include <bits/stdc++.h>
using namespace std;
int m,n,cnt=0;
int a[500005],b[500005],c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int l=0;l<n;l++){	
		for(int i=0,i2=l;i<n && i2<n;i++,i2++){
			bool flag=false,k=0;
			for(int j=0;j<n;j++){
				if(b[j]==a[i2]){
					flag=true;
					k=j;
					break;
				}
			} 
			
			if(!flag)b[i]=a[i2];
			else{
				for(int j=k;j<n;j++)b[j]=0;
				i=k;
				b[i]=a[i2];
			}
		}
		for(int i=0;i<n;i++){
			c[b[i]]++;
			b[i]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
} 
