#include<bits/stdc++.h>
using namespace std;
int a[200001];
int mx=-1;
int n,m;
void go(int i,int z,int last){
	if(i==0){
		mx=max(mx,z);
		return; 
	}
//	cout<<i;
	for(int j=i+1;j<=n;j++){
		if(i==m){
			z=a[j];
		}
		go(i-1,a[j]&z,j);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
//	cout<<1;
	for(int i=1;i<=n;i++){
//		cout<<1;
		cin>>a[i];
	}
	go(m,0,0);
	cout<<mx;
	return 0;
}