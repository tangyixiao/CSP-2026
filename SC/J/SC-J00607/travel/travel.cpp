#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a[1]!=c[1]||a[0]!=c[0]){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(b[1]!=d[1]||b[0]!=d[0]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	int s=b[2]-'A'+1;
	int g=d[2]-'A'+1;
	if(!((abs(s-g)<=2&&(!(s==3&&g==4)||(s==4&&g==3))))){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs(s-g)!=1||s+g==7){
		cout<<"0";
		return 0;
	}
	cout<<1;
	return 0;
} 