#include<bits/stdc++.h >
using namespace std;
int a[500010];
int las[500010];
int hsh[300010];
int result[300010];
int ex[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(hsh[a[i]])las[i]=hsh[a[i]];
		hsh[a[i]]=i;
	}
	
	for(int i=1;i<=n;i++){
		memset(ex,0,sizeof(ex));
		for(int j=n;j>=i;){
			if(!ex[a[j]]){
				result[a[j]]++;
				ex[a[j]]=1;
			}
			
			if(las[j]>=i){
				j=las[j]-1;
			}else j--;
		}
	}
	
	for(int i=1;i<=m;i++)cout<<result[i]<<" ";
	return 0;
}
