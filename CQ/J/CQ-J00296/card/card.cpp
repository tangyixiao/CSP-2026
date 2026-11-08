#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[10005],b[10005],c[10005];
int t=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}	
	for(int i=t;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				for(int k=i;k<j;k++){
					c[k]=1;
				}
			} 
		}
		for(int j=t;j<=n;j++){
			if(c[j]==0){
				b[a[j]]+=1;
			}else{
				c[j]=0;	
			}			
		}
		t++;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 
