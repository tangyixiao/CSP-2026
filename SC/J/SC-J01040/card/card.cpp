#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],c[100001],s[100001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	} 
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=i+1;k<=n;k++){
				if(a[j]==a[k]){
					for(int f=j;f<=k-1;f++){
							a[f]=-1;
					}
				}
			}
		}
			for(int d=i;d<=n;d++){
				if(a[d]>0){
					s[a[d]]++;
				}
			}
			for(int k=1;k<=n;k++){
				a[k]=b[k];
			}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}