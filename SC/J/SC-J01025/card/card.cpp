#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],a1[500001],t[300001];
int f(int x){
	int b[500001],aa=1,a1=1;
	for(int i=1;i<=n;i++) b[i]=1e9;
	for(int i=x;i<=n;i++){
		b[a1+aa]=a[i];
		int root;
		for(int j=a1;j<a1+aa;j++){
			if(b[j]==b[a1+aa]){
				aa-=a1+aa-j,root=j;break;
			}
		}
		for(int j=root+1;j<=a1+aa+root+1;j++) b[j]=1e9;
	}
	for(int i=1;i<=m;i++){
		if(b[i]==1e9) break;
		t[b[i]]++;
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a1[i];
	for(int i=1;i<=n;i++) a[i]=a[n-i+1];
	for(int i=1;i<=n;i++) f(i);
	for(int i=1;i<=m;i++) cout<<t[i]<<' ';
	return 0;
}