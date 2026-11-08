#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],b[500010];
bool f=true;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=n+1-i;
		if(a[i]<a[i-1]) f=false;
	}
	if(f==true && n==m){
		for(int i=n;i>=1;i--){
			cout<<i<<" ";
		}
	}
	if(f==true && n!=m){
		int k;
		for(int i=2;i<=n;i++){
			if(a[i]==a[i-1] && a[i]<a[i+1]){
				k=i;
				for(int j=k;j<=n;j++){
					b[j]--;
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<b[i]<<" ";
		}
		return 0;
	}
	return 0;
}
