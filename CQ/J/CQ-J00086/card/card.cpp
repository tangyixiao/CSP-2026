#include<iostream>
using namespace std;
int a[5000001];
int c[5000001];
int b[5000001];
int d[5000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[j]=a[j];
			if(b[a[j]]!=0){
				for(int k=b[a[j]];k<j;k++){
					c[k]=0;
					b[a[k]]=0;
				}
			}
			b[a[j]]=j;
		}
		for(int j=i;j<=n;j++){
			for(int k=1;k<=m;k++)
				if(c[j]==k){
					d[k]++;
					break;
				}
			b[j]=c[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
