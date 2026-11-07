#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int a[N];
int b[N];
int c[M];
int v[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int tot=1;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=n;i>=1;i--){
		tot=1;
		for (int j=1;j<=i;j++){
			if (!v[a[j]]){
				b[tot]=a[j];
				tot++;
				v[a[j]]=1;
			}
			else{
				while(b[tot]!=a[j]){
					b[tot]=0;
					v[b[tot]]=0;
					tot--;
				}
				b[tot]=0;
				v[b[tot]]=0;
			}
		}  
		for (int j=1;j<=m;j++){
			if (v[j]==1)c[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<' '; 
	return 0;
}