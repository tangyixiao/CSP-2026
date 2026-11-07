#include<bits/stdc++.h>
using namespace std;
int n,m,a[500003],b[300003]={};
int c[300003]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c[a[j]]!=0){
				for(int h=c[a[j]]+1;h<j;h++){
					c[a[h]]=0;
				}
				c[a[j]]=j;
			}else{
				c[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++){
			if(c[j]!=0){
				c[j]=0;b[j]++;
			}
			
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" "; 
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
