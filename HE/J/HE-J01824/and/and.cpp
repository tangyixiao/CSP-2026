#include  <bits/stdc++.h>
using namespace std;
int a[100000001];
int main(){
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
	int n,m,d;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=0;j<n;j++){
	
		if(m==2){
			int z;
			z=0;
			 d=max(a[z]&a[z+1],a[z+1]&a[z+2]);
		z++;
			
		}
	}
}	cout<<d;
	return 0;
}
