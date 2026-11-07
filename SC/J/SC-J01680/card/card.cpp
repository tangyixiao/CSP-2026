#include<bits/stdc++.h>
using namespace std;
int a[500003],b[500003],c[200002];
void egg(int x,int y){
	for(int i=x;i<y;i++)b[i]=0;
}
int check(int k){
	for(int i=0;i<k;i++)if(b[i]==b[k]){
		egg(i+1,k+1);
		return i+1;
	}
	return k;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int p=0;
		for(int j=i;j<n;j++){
			b[p]=a[j];
			p=check(p);
			p++;
		}
		for(int j=0;j<p;j++)c[b[j]]++;
		egg(0,p);
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
} 