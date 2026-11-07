#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",std.in); 
	freopen("card.out","w",std.out); 
	int a,b[10],c,d[10];
	cin>>a>>b[1]>>b[2]>>c>>d[1]>>d[2];
	if(a==c){
		cout<<1;
	}else{
		cout<<0;
	}
	if(b[1]==d[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
