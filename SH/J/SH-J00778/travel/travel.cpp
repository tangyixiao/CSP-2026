#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m,q,w;
	char a,b;
	cin>>n>>m>>a>>q>>w>>b;
	if(n==q){
		cout<<1;
	}else{
		cout<<0;
	}
	if(n==q && m==w){
		cout<<1;
	}else{
		cout<<0;
	}
	if(n==q && m==w && a<='C' && b<='C' || n==q && m==w && a>='D' && b>='D'){
		cout<<1;
	}else{
		cout<<0;
	}
	if(n==q && m==w && a<='C' && b<='C'){
		if(a==b+1 || a==b-1){
			cout<<1;
		}else{
			cout<<0;
		}
	}else if(n==q && m==w && a>='D' && b>='D'){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
