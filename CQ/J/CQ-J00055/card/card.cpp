#include<bits/stdc++.h>
using namespace std;

const int N=5*1e5+5;
int n,m,a[N],b[N],c[N],g;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[j-1]!=0&&j!=1) b[j]=a[j];
			else{
				b[j-g]=a[j];
			}
			for(int h=j;h<=n;h++){
				if(b[i]==b[j]){
					for(int k=h+1;k<=j;k++){
						b[k]=0;
					}
					b[h+1]=a[j+1];
					g+=j-h-1;
				}
			}
		}
		for(int j=1;j<=n;j++){
			c[b[j]]+=1;
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
	return 0;
}
