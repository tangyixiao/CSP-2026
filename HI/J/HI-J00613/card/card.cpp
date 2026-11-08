#include<bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005]={0};
int c[200005];
int d[300005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int u=1;
		for(int j=1;j<=n;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			
			if(b[a[j]]==0){
				b[a[j]]=1;
				c[u]=a[j];
			}else{
				for(int k=1;k<=m;k++){
					b[k]=0;
				}
				for(int k=1;k<=n;k++){
					c[k]=0;
				}
				u=1;
				c[u]=a[j];
				b[a[j]]=1;
			}
			u++;
		}
		for(int h=1;h<=m;h++){
			for(int l=1;l<=n;l++){
				if(c[l]==h){
					d[h]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
