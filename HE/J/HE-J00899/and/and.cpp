#include<bits/stdc++.h>
using namespace std;
int m,n,k=0;
int a[100005];
int jin[100005];
int zhi[100005]; 
//int er(int x){
//	int i=1,j=1;
//	while(x!=0){
//		jin[i]=x%2;
//		x=x/2;
//		i++;
//	}
//	while(i!=1){
//		jin[i]=zhi[j];
//		i--;
//		j++;
//	}
//	for(int k=1;k<=10;k++){
//	return 	zhi[i];
//	
//	}
//	
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		k++;
	}
	cout<<a[k];
	
	return 0;
}

