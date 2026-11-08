#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],h[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int g=n;
	while(g--){
		for(int i=1;i<=n;i++)
			b[i]=0;
		for(int i=n-g;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i]==b[j]){
					for(int k=j;k<=n;k++){
						b[k]=0;
					}
				}
				if(b[j]==0){
					b[j]=a[i];
					break;
				}
			}
			
		} 
		for(int i=1;i<=n;i++)
			h[b[i]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<h[i]<<" ";
	return 0;
}
