#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10005],b[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m2,x;
	for(int k=1;k<=m;k++){
		m2=0,x=0;
		for(int j=1;j<=n;j++){
			m2=max(m2,a[j]);
			if(a[j]>m2){
				x=j;
			}
		}
		b[k]=m2;
		cout<<b[k]<<endl;
		a[x]=0;
	}
	int ans=INT_MAX;
	for(int l=1;l<=m;l++){
		if(b[l]<ans) ans=b[l];
	}
	cout<<ans;
	return 0;
}
