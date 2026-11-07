#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N],a2[N],c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a2[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int k=i;k<=n;k++){
			for(int j=1;j<=k;j++){
				if(a[k]==a2[j]){
					for(int v=j;v<=k;v++){
						a2[v]=0;
					}
					break;
				}
			}
			a2[k]=a[k];
		}
		for(int j=i;j<=n;j++){
			c[a2[j]]++;
		}
		for(int j=i+1;j<=n;j++){
			a2[j]=a[j];
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}