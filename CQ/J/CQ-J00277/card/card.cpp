#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[511111],b[311111];
bool f;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			f=0;
			for(int k=j;k<=n;k++){
				if(a[k]==a[j]&&k!=j){
					f=1;
					j=k-1;
					break;
				}
			}
			if(f==0){
				b[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
