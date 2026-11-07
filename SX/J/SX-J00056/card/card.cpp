#include<bits/stdc++.h>
using namespace std;
long long a[500005],b[300005],c[500005];
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
			int f=0;
			for(int x=i;x<j;x++){

				if(c[x]==c[j]){
					f=1;
				}
				if(f==1) c[x]=-1;


			}

		}
		for(int y=i;y<=n;y++){
			if(c[y]!=-1) {
				b[c[y]]++;
			}
		}
 }
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}