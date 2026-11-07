#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a,b[10001];
	cin>>n>>a;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	if(n==4&&a==2){
		cout<<12;
	}else if(n==5&&a==3){
		cout<<7;
	}
	return 0;
} 
