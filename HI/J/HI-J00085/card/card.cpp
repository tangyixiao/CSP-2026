#include<bits/stdc++.h>
using namespace std;
int a[600000],b[600000],c[600000];
int main(){
	freopen("cardin","r",stdin);
	freopen("cardout","w",stdout); 
	int n,m,s=1,n1,f=0;
	cin>>n>>m;
	n1=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int q=1;q<=n;q++){
		for(int i=s;i<=n;i++){
			for(int j=i;j<=n1;j++){
				if(b[j]==a[i]){
					f=1;
				}
			}
			if(f==1){
				b[i]==0;
				b[i+1]==0;
				b[n1+1]=a[i];
				n1+=1;
			}
			else{
				b[n1+1]=a[i];
			}
		}
		for(int z=1;z<=n1;z++){
			if(b[z]==q){
				c[q]+=1;
			}
		}
		s++;
		for(int m=1;m<=n;m++){
			b[m]=0;
		}
	}
	for(int z=1;z<=n;z++){
		if(c[z]!=0){
			cout<<c[z];
		}
	}
}
