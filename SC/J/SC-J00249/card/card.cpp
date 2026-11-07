#include <iostream>
#include <algorithm>
using namespace std;
int a[100005],c[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,sum=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		int b[100005];
		for(int j=i;j<=n;j++){
			bool pd=true;
			for(int k=i;k<=n;k++){
				if(pd==false){
					b[k]=0;
				}
				if(b[k]==a[j]){
					pd=false;
					b[k]=0;
				}
			}
			b[j]=a[j];
	 	}
		for(int j=i;j<=n;j++){
			c[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		if(c[i]!=0){
			if(i==m){
				cout<<c[i];
			}
			else{
				cout<<c[i]<<" ";
			}
		}
	}
	return 0;
}