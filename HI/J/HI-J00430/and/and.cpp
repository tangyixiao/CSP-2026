#include<bits/stdc++.h>
using namespace std;
int a,c=0,d,big=-1000000,m,e;
int b[100];
int main(){
	//freopen("andin","r",stdin);
	//freopen("andout","w",stdout);
	cin>>a;
	for(int i=0;i<=a;i++){
		cin>>b[i];
	}
	for(int y=1;y<=a;y++){
		for(int u=1;u<=a;u++){
			e=b[y];
			d=b[u];
			if(b[y] && b[u]>big){
				big=c;
			}
		}
	}
	cout<<c;
	return 0;
	}
