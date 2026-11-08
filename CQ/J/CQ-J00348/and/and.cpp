#include<bits/stdc++.h>
using namespace std;
int n,m,mx=-1;
int a[20005];
int b(int x,int i,int y){
	int j;
	for(j=i;j<=n;j++){
		b(x and a[j],j,y-1);
	}
	if(y==0){
		return x and a[j]; 
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<b(1,0,m); 
} 
