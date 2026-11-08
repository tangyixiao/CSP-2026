#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000"<<"\n";
	}
	else if(b[0]!=d[1]||b[1]!=d[1]){
		cout<<"1000"<<"\n";
	}
	else if((b[2]>='D'&&d[2]<='D')||b[2]<'D'&&d[2]<'D'){
		cout<<"1100"<<"\n";
	}
	else if(b[2]-1!=d[2]&&b[2]+1!=d[2]){
		cout<<"1110"<<"\n";
	}
	else cout<<"1111"<<"\n";
	return 0;
} 
