#include<bits/stdc++.h>
using namespace std;
int a[500005],c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++){
		int b[500005]={};
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0)
			b[a[j]]=j;
			else{
				for(int k=b[a[j]];k<=j;k++)
				b[a[k]]=0;
				b[a[j]]=j;
			}
		}
		for(int o=1;o<=m;o++){
			if(b[o]!=0)
			c[o]++;
		}
	}
	for(int o=1;o<=m;o++)
	cout<<c[o]<<" ";
	return 0;
}
