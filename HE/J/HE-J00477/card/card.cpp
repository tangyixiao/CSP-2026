#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int i;
	cin>>n>>m;
	int k[50005],k1[50005],z[30005];
	for(i=1;i<=n;i++){
		cin>>k[i];
		k1[i]=k[i];
	}
	z[k[n]]=n;
	cout<<n;
	int j;
	for(i=1;i<=n;i++){
		if(k1[i]!=k[n]){
			z[k1[i]]++;
		}
	}
	for(i=1;i<=m;i++){
		cout<<z[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
