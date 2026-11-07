#include<bits/stdc++.h>
using namespace std;
long long a[200200],d[200200],c[10100],p[10100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		int dai=a[i];
		if(p[a[i]]<2){
			continue;
		}
		for(int j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				d[i]=j-i-1;
			}
		}
		if(!d[i]){
			p[a[i]]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(d[j]){
				j+=d[j];
			}
			else{
				c[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
