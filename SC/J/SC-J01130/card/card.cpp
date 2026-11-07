#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],t[500005],len;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		bool c[500005]={};
		for(int j=i;j<=n;++j){
			if(c[a[j]]==1){
				while(b[len]!=a[j]){
					c[b[len]]=0;
					b[len]=0;
					len--;
				}
			}else{
				b[++len]=a[j];
				c[a[j]]=1;
			}
		}
		for(int j=1;j<=len;++j){
			t[b[j]]++;
			b[j]=0;
		}
		len=0;
	}
	for(int i=1;i<=m;++i){
		cout<<t[i]<<" ";
	}
	return 0;
} 