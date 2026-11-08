#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m,a[200001],b[200001];cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int j=i,s=0;
		while(j<=n){
			for(int k=n;k>=1;k--)if(a[k]==a[j]){j=k;b[a[k]]++;s++;break;}
			if(s==0)b[j]++;j++;
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
}
