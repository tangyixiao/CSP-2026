#include<bits/stdc++.h>
using namespace std;
long long n,m,a[50010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int p[30010];
	for(int i=1;i<=n;i++){
		int b[30010],t=0;
		for(int j=n-i+1;j<=n;j++){
			b[++t]=a[j];
			bool f=0;
			for(int k=1;k<t;k++){
				if(f==1)b[k]=0;
				else if(b[k]==b[t]){
					b[k]=0;
					f=1;
				}
			}
		}
		for(int j=1;j<=t;j++){
			p[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<p[i]<<" ";
	return 0;
}