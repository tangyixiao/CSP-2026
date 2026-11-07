#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[200005],b[100005];
	cin>>n>>m;
	if(n==m){
		for(int i=1;i<=m;i++){
			cout<<1<<" ";
		}
		return 0;
	} 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=1;
	} 
	int x=1;
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-1]){
			cout<<b[x]<<" ";
			b[x+1]=b[x]+1;
			x++; 
		}
		else{
			b[x]++;
		}
	} 
	cout<<b[x];
	fclose(stdin);
	fclose(stdout);
	return 0;
}