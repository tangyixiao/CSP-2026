#include<bits/stdc++.h>
using namespace std;
int n,m,a[10001],da,r,b[10001],k=1,c[10001];
//int yu(int x){
//	while(x!=0){
//		b[k]=x%2;
//		x/=2;
//		k++;
//	}
//	return 1;
//}
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>da) da=a[i];
		}
		cout<<da;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	c[1]=a[1];
	for(int i=1;i<=n;i++){
		c[i]=c[i]&a[i+1];
	}
	cout<<c[n];
	
	return 0;												
} 
