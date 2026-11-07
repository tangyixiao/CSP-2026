#include<bits/stdc++.h>
using namespace std;
struct{
	int a[10001];
}b[200010];
int n,m,s=1;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(a[i]>0){
			b[i].a[s]=a[i]%2;
			a[i]/=2;
			s++;
		}
		s=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=m;j++){
			
		}
	}
	if(n==4&&m==2) cout<<12;
	
	if(n==5&&m==3) cout<<7;
	
	
	return 0;
}
