#include<bits/stdc++.h>
using namespace std;
int n,m,w;
long long a[500005],b[300005],c[500005],c_top=1;
int p=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[c_top]=a[j];
			c_top++;
			for(int k=c_top-2;k>=1;k--){
				if(c[k]==a[j]){
					p=k+1;
					break;
				}
			}
			if(p!=0){
				c_top=p;
				p=0;	
			}
		}
		for(int j=1;j<c_top;j++){
			b[c[j]]++;
			//cout<<c[j]<<" ";
		}
		//cout<<endl;
		c_top=1;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}