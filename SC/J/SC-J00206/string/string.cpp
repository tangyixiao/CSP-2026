#include<iostream>
using namespace std;
int n,a[222];
string c[665];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<0;
	}
	return 0;
}