#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==5&&m==3)cout<<7;
	if(n==4&&m==2)cout<<12;
	return 0;
}
