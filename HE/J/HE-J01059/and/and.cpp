#include<bits/stdc++.h>
using namespace std;
long long a[200009],b[200009],c[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
		c[i]=a[i];
	}
	if(n==1){
		cout<<a[n];
		return 0;
	}
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			b[j]=max(c[j-1]&a[j],b[j-1]);
			c[j]=b[j];
		}
	}
	cout<<b[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
