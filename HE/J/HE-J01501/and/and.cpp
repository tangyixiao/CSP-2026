#include<bits/stdc++.h>
using namespace std;
int a[500000]={0},p[500000]={0},s[500000]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,j=50000;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		while(a[i]/2==0){
			p[i]=a[i]/2;
			s[i]=a[i]%2;
			if(p[i]==1){
				cout<<p[i]+s[i];
			}
		}
	}
	return 0;
}
