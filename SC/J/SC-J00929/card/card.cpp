#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[500005]={0},c[300005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++)b[k]=0;
		int j=i,q=i;
		while(j<=n){
			b[q]=a[j];
			for(int k=i;k<=n;k++){
				if(b[q]==b[k]&&q!=k){
					q=k-1;
				
					for(int d=k;d<=q;d++)b[d]=0;	break;
				}
			}
			j++;
			q++;
		}
		for(int k=i;k<=q-1;k++){
			c[b[k]]++;
			//cout<<b[k]<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}