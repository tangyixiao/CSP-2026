#include<bits/stdc++.h>
using namespace std;
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
long long n,m,a[500005],b[500005],c[300005],d[300005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j]=a[j];
		}
		for(int j=1;j<=m;j++){
			c[j]=0;
		}
		for(int j=i;j<=n;j++){
			for(int p=j+1;p<=n;p++){
				if(b[j]==b[p]){
					for(int q=j+1;q<=p;q++){
						b[q]=0;
					}
				}
			}
		}
		for(int j=i;j<=n;j++){
			c[b[j]]+=1;
		}
		for(int j=1;j<=m;j++){
			if(c[j]>0){
				d[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}