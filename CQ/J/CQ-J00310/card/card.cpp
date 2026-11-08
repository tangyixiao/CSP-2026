#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],l,c[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		l=0;
		for(int j=i;j<=n;j++){
			for(int k=0;k<l;k++){
				if(b[k]==a[j]){
					l=k;
					break;
				}
			}
			b[l++]=a[j];
		}
		for(int j=0;j<l;j++)c[b[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<' ';
	return 0;
}
