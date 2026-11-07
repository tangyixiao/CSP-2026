#include<bits/stdc++.h>
using namespace std;
long long a[3000001],b[5000001],n,m;
bool c[5000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof(c));
		for(int j=i;j<=n;j++){
			if(c[a[j]]){
				for(int l=j-1;a[l]!=a[j];l--)c[a[l]]=0;
			}c[a[j]]=1;
		} 
		for(int j=1;j<=n;j++){
			if(c[j])b[j]++;
		}
	}for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	fclose(stdin);
	fclose(stdout);
} 