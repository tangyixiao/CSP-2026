#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],c[500010],l,r,p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=i;k<j;k++){
				if(b[k]==a[j]){
					r=k;
					b[r]=a[j];
					l=1;
					break;
				} 
			}
			if(l==0)r++,b[r]=a[j];l=0;
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=r;k++){
				if(b[k]==j)p=1;
			}
			c[j]+=p;
			p=0;
		}
		r=0;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
}