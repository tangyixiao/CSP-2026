#include<bits/stdc++.h>
using namespace std;
string a,b,n,m;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>n>>m;
	if(a[0]==n[0]&&a[1]==n[1]){
		cout<<1;
		if(b[0]==m[0]&&b[1]==m[1]){
		cout<<1;
		if((b[2]>='D'&&b[2]<='E'&&m[2]>='D'&&m[2]<='E')||(b[2]>='A'&&b[2]<='C'&&m[2]>='A'&&m[2]<='C')){
			cout<<1;
			if((b[2]>='D'&&b[2]<='E'&&m[2]>='D'&&m[2]<='E'&&(b[2]==m[2]+1||b[2]==m[2]-1))||(b[2]>='A'&&b[2]<='C'&&m[2]>='A'&&m[2]<='C'&&(b[2]==m[2]+1||b[2]==m[2]-1))){
				cout<<"1";
			}else{
				cout<<"0";	
			}
		}else{
			cout<<"00";
		}
	}else{
		cout<<"000";
	} 
	}else{
		cout<<"0000";
	} 
	return 0;
} 