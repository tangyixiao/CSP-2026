#include<bits/stdc++.h>
using namespace std;
int a[5005],b[5005],c[5005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int cur=1;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=cur;k<=j-i;k++){
				if(b[k]==a[j]){
					cur=k+1;
					break;
				}
			}
			b[j-i+2]=a[j];
		}
		for(int j=cur;j<=n-i+1;j++){
			c[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
