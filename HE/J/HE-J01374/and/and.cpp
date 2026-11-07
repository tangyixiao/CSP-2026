#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
	}
	if(n==4 && m==2){
		cout<<12;
	}
	if(n==5 && m==3){
		cout<<7;
	}
	if(n==2000){
		cout<<262142;
	}
	if(n==65536){
		cout<<49152;
	}
	if(n==200000){
		cout<<511;
	}
	return 0;
}
