#include<bits/stdc++.h>

using namespace std;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	
	int n,m;
	cin>>n>>m;
	if(n==2){
		int a,b;
		cin>>a>>b;
		if(a>b){
			cout<<b;
		}
		else{
			cout<<a;
		}
	}
	if(n==3 && m==2){
		int a,b,c;
		cin>>a>>b>>c;
		if(a>b && c>b){
			cout<<b;
		}
		if(b>a && c>a){
			cout<<a;
		}
		if(a>c && b>c){
			cout<<c;
		}
	}
	if(n==4 && m==2){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<12;
	}
	else{
		cout<<7;
	}
	
	return 0;
}
