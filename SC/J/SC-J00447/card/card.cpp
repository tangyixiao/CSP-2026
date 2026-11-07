#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];b[a[i]]=0;}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				int aa=0;
				for(int z=j-1;z>=i;z--)if(a[z]==a[j]){aa=z;break;}
				if(aa!=0)for(int z=aa;z<=j;z++)b[a[z]]=0;
				b[a[j]]=1;
			}
			else b[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(b[j]==1){
				c[j]++;	
				b[j]=0;
			}
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
}