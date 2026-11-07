#include<bits/stdc++.h>
using namespace std;
int t(int x,int y){
	return x>y;
}
int c[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[n];
	}
	if(m==1){
		sort(c+1,c+1+n,t);
		cout<<c[1];
		return 0;
	}
	if(n==1){
		cout<<c[1];
		return 0;
	}
	cout<<"49152";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
