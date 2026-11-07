#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool k1,k2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	else cout<<1;
	if(b[0]!=d[0]||b[1]!=d[1]){
		cout<<"000";
		return 0;
	}
	else cout<<1;
	if(b[2]>'C')k1=true;
	if(d[2]>'C')k2=true;
	if(k1!=k2){
		cout<<"00";
		return 0;
	}
	else cout<<1;
	if(b[2]+1==d[2]||b[2]-1==d[2]){
		cout<<1;
	}
	else cout<<0;
	return 0;
	
}